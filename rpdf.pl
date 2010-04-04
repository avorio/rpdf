#!/usr/bin/perl

sub usage() {
    print <<EOD;

Extracts text and layout information from PDF documents, using
pdftohtml or ocropus for OCR.

usage: perl $0 [-d int] [-p int] file.pdf

 -d int : debug level
 -p int : max. number of pages to parse

If -p is not specified, will parse 1-3 pages depending on the length
of the pdf document.

EOD
   exit;
}

use constant GS         	=> '/usr/bin/gs';
use constant OCROSCRIPT 	=> 'ocropus/ocroscript/ocroscript';
use constant TEMPDIR 	        => '/tmp/';
use constant DPI 		=> 300;

use strict;
use warnings;
binmode STDOUT, ":utf8";
use Sysexec;

# change to right directory for relative paths:
use File::Basename qw/dirname/;
chdir(dirname($0));

my %opt = ( "d" => 0 );
my $pdf;
sub init() {
    use Getopt::Std;
    getopts( "hvd:p:", \%opt ) or usage();
    usage() if $opt{h};
    @ARGV >= 1 || usage();
    $pdf = $ARGV[0] ;
}

sub pdf2xml {
    # convert pdf to pngs:
    my $source = shift;
    if (!(-e $source)) {
	die "$source does not exist";
    }
    my $tempfile = $source;
    $tempfile =~ s/\W/o/g;
    $tempfile = TEMPDIR.$tempfile;
    my $command = GS
              ." -sOutputFile=$tempfile%03d.png"
              .' -sDEVICE=pnggray'
              .' -dTextAlphaBits=4'
	      .' -r'.DPI
              .' -dNOPAUSE -dSAFER -dBATCH -q'
	      ." $source"
	      .' 2>&1';     # stderr to stdout
    print "$command\n" if $opt{'d'} >= 3;
    my $out = sysexec($command, 20, $opt{'d'}) || '';
    print "$out\n" if $opt{'d'} >= 3;
    my $pages = 0;
    $pages++ while (-e $tempfile.sprintf("%03d.png", $pages+1));
    die "gs failed. $out" if $pages == 0;

    # OCR pngs:
    my @pngs;
    if ($opt{'p'}) {
        for (my $i=1; $i<=$pages && $i<=$opt{'p'}; $i++) {
            push @pngs, $tempfile.sprintf("%03d.png", $i);
        }
    }
    else {
        push @pngs, $tempfile."001.png";
        push @pngs, $tempfile."002.png" if ($pages > 5 || $opt{'p'} > 1);
        push @pngs, $tempfile."003.png" if ($pages > 30 || $opt{'p'} > 2);
        # push @pngs, $tempfile.sprintf("%03d.png", $pages) if ($pages > 1);
    }
    $command = OCROSCRIPT
              .' rec-tess'
              .' '.join(' ', @pngs)
	      .' 2>&1';     # stderr to stdout
    print "$command\n" if $opt{'d'} >= 3;
    my $xml = sysexec($command, 60, $opt{'d'}) || '';
    print "$xml\n" if $opt{'d'} >= 3;
    die "OCR failed: $xml" unless ($xml =~ /DOCTYPE/);

    # fix some common OCR mistakes:
    $xml =~ s/(?<=[a-z])0(?=[a-z])/o/g;    # 0 => o
    $xml =~ s/(?<=[a-z])1(?=[a-z])/i/g;    # 1 => i
    $xml =~ s/. .u \&\#174\;//g;           # This the JSTOR logo

    # convert ocroscript output to pdftohtml-style XML output
    # (output is not valid XML atm):
    my $scale = 100/DPI;
    # strip <p> tags, they are useless:
    $xml =~ s/<\/?p.*?>//g;
    # replace <div> by <page>:
    # ocroscript doesn't preserve font info; we only get <h3> for headings.
    my $fontspecs = '<fontspec id="0" size="12" family="Times" color="#000000"/>'."\n"
      .'<fontspec id="1" size="18" family="Times" color="#000000"/>'."\n";
    my $page_re = qr/<div.+page.+bbox (\d+) (\d+) (\d+) (\d+).+?>/;
    for (my $p=1; $xml =~ /$page_re/; $p++) {
	my $newtag = '<page number="'.$p.'" position="absolute" top="0" left="0" height="'.int($4*$scale).'" width="'.int($3*$scale).'">';
	$xml =~ s/$page_re/$newtag\n$fontspecs/;
    }
    $xml =~ s|</div|</page|g;
    # replace <span> by <text>:
    $xml =~ s/<span.+bbox (\d+) (\d+) (\d+) (\d+).+?>/'<text top="'.int($2*$scale).'" left="'.int($1*$scale).'" width="'.int(($3-$1)*$scale).'" height="'.int(($4-$2)*$scale).'" font="0">'/ge;
    $xml =~ s|</span|</text|g;
    # adjust font size for <h3>:
    my @xml = split /<\/?h3.*?>/, $xml;
    my $in_h3 = 0;
    for my $i (0 .. $#xml) {
	$xml[$i] =~ s/font="0">/font="1">/g if ($in_h3);
	$in_h3 = !$in_h3;
    }
    $xml = join "\n", @xml;
    return $xml;
}

init();
my $out = pdf2xml($pdf);
print $out;

1;
