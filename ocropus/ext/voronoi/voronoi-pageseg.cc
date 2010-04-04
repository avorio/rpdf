/*
  $Date: 1999/10/15 12:40:27 $
  $Revision: 1.1.1.1 $
  $Author: kise $
  main.c
  �ᥤ��ץ����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "defs.h"
#include "const.h"
#include "function.h"

namespace voronoi{
#define LINE_C  128
#define WIDTH   5

    BlackPixel 	*bpx;		/* �����Ǥκ�ɸ�Ȥ��Υ�٥� */
    Neighborhood	*neighbor;	/* ����Ϣ����ʬ�֤���ħ�� */
    LineSegment	*lineseg;	/* �����������κ�ɸ�ȥ�٥� */
    HashTable	*hashtable[M1+M2];
    /* ����Ϣ����ʬ�Υ�٥���Ф�
       ��ϥå���ɽ */
    EndPoint	*endp;		/* ��ʬ��ü�� */

    NumPixel	BPnbr;		/* �����Ǥο� */
    Label	        LABELnbr;	/* Ϣ����ʬ�� */
    unsigned int	NEIGHnbr;	/* ���ܤ���Ϣ����ʬ���Ȥο� */
    unsigned int	LINEnbr;	/* �������Υ��ꥢ�ܥ�Υ��դ�
                                           ��ʬ�ο� */
    unsigned int	Enbr;		/* �ܥ�Υ��դ�������Ϣ��
                                           ��ʬ���Ȥο� */
    long		SiteMax;	/* �ܥ�Υ������ֹ�κ����� */

    int		noise_max = NOISE_MAX;	   /* �����Ϣ����ʬ�β��ǿ� */
    int		sample_rate = SAMPLE_RATE; /* ���������פǥ���ץ�󥰤� */
					   /* ���� */
    float		freq_rate = FREQ_RATE;
    int             Ta = Ta_CONST;
    unsigned int	sample_pix;	/* ����ץ�󥰤�������줿�� */
    /* �ǿ� */
    unsigned int	point_edge;	/* ���ܥ�Υ��դ��ܿ� */
    unsigned int	edge_nbr;	/* �����Υ��ꥢ�ܥ�Υ��դ� */
    /* ��ʬ���ܿ� */
    int             *area;       /* ��٥�ln �ΤĤ���Ϣ����ʬ������ */

#ifdef TIME
    float    b_s_time=0;
    float    v_time=0;
    float    e_time=0;
    float    o_time=0;
    clock_t		start, end;
#endif /* TIME */

    float	xmin, xmax, ymin, ymax, deltax, deltay;

    struct	Site		*sites;
    int			nsites;
    int			siteidx;
    int			sqrt_nsites;
    int			nvertices;
    struct 	Freelist 	sfl;
    struct	Site		*bottomsite;

    int 			nedges;
    struct	Freelist 	efl;

    struct  Freelist	hfl;
    struct	Halfedge	*ELleftend, *ELrightend;
    int 			ELhashsize;
    struct	Halfedge	**ELhash;

    int 			PQhashsize;
    struct	Halfedge 	*PQhash;
    int 			PQcount;
    int 			PQmin;

    /* �ɲõ�ǽ�� */
    int    smwind = SMWIND;

    /* �ɲ�ʬ */
    char     output_points = NO;
    char     output_pvor = NO;
    char     output_avor = NO;
    char     display_parameters = NO;


    void voronoi_pageseg(LineSegment **mlineseg, 
                         unsigned int *nlines,
                         ImageData *imgd1) {
        int 		i;

        point_edge = 0;
        edge_nbr = 0;

        BPnbr = LABELnbr = NEIGHnbr = LINEnbr = Enbr = SiteMax = 0;

        /* �����ѥ�᡼����ɽ��
           displaying parameters */
        if(display_parameters == YES)
            dparam();

        /* �����μ���1 ����ʬ��0 �˥��åȤ���. */
        frame(imgd1,1,0);

        /* ������bpx ���ΰ���� */
        bpx=(BlackPixel *)myalloc(sizeof(BlackPixel)* INITPIXEL);

        /* Site ��sites ���ΰ���� */
        sites = (struct Site *) myalloc(SITE_BOX*sizeof *sites);
    
        /* ���ϲ�����Site �����Ѵ� */
    
        fprintf(stderr,"Transforming Image to Site...");
#ifdef TIME
        start = clock();
#endif
        img_to_site(imgd1);
#ifdef TIME
        end = clock();
        b_s_time = (float)((end-start)/((float)CLOCKS_PER_SEC));
#endif
        fprintf(stderr,"done\n");

        /* area[ln] ���ΰ���� */
        area=(int *)myalloc(sizeof(int)*LABELnbr);

        /* area[ln] ���ͤ����� */
        for(i=0;i<LABELnbr;i++) area[i]=0;

        /* area[ln] ���ͤ򥻥å� */
        for(i=0;i<BPnbr;i++) area[bpx[i].label]++;

        /* bpx ���ΰ���� */
        free(bpx);
    
        /* ����Ϣ����ʬ�֤���ħ��neighbor ���ΰ���� */
        neighbor = (Neighborhood *)myalloc(sizeof(Neighborhood)* INITNEIGHBOR);

        /* ��ʬlineseg ���ΰ���� */
        lineseg = (LineSegment *)myalloc(sizeof(LineSegment)* INITLINE);

        /* �ϥå���ɽ������
           initialization of hash tables */
        init_hash();

        /* ���ꥢVoronoi �޺��� 
           constructing the area Voronoi diagram */
    
        fprintf(stderr,"Constructing area Voronoi diagram...");
#ifdef TIME
        start = clock();
#endif
        voronoi(imgd1->imax, imgd1->jmax);
#ifdef TIME
        end = clock();
        v_time = (float)((end-start)/((float)CLOCKS_PER_SEC));
#endif
        fprintf(stderr,"done\n");

        /* �ܥ�Υ��դ�ü��endp ���ΰ���� */
        SiteMax+=1;
        endp = (EndPoint *)myalloc(sizeof(EndPoint) * SiteMax);
    
        /* �ܥ�Υ��ս��� */
        fprintf(stderr,"Erasing Voronoi edges...");
#ifdef TIME
        start = clock();
#endif
        erase();
#ifdef TIME
        end = clock();
        e_time = (float)((end-start)/((float)CLOCKS_PER_SEC));
#endif
        fprintf(stderr,"done\n");

        /* neighbor ���ΰ���� */
        free(neighbor);
        
        /* �ܥ�Υ��ս��� */
#ifdef TIME
        start = clock();
#endif
        *nlines = LINEnbr;
        *mlineseg = (LineSegment *)malloc(LINEnbr*sizeof(LineSegment));
        for(i=0;i<LINEnbr;i++) {
            (*mlineseg)[i] = lineseg[i];
            if(lineseg[i].yn == OUTPUT &&
               (lineseg[i].xs != lineseg[i].xe
                || lineseg[i].ys != lineseg[i].ye)) {
                edge_nbr++;
            }
        }

#ifdef TIME
        end = clock();
        o_time = (float)((end-start)/((float)CLOCKS_PER_SEC));
#endif

        dnumber(imgd1->imax, imgd1->jmax);
        /* �ΰ���� */
        free(area);
        free(sites);
        free(lineseg);
        free(endp);
        free(imgd1->image);
    }

    void voronoi_colorseg(ImageData *out_img,
                          ImageData *in_img) {
    
        unsigned int nlines=0;
        LineSegment	 *mlineseg;
        voronoi_pageseg(&mlineseg,&nlines,in_img);

        /* setting image size */
        out_img->imax=in_img->imax;
        out_img->jmax=in_img->jmax;
        if((out_img->image=(char *)malloc(in_img->imax*in_img->jmax))==NULL){
            fprintf(stderr,"voronoi_colorseg: not enough memory for image\n");
            exit(1);
        }

        bit_to_byte(in_img,out_img, 1 );

        for(int i=0;i<nlines;i++){
            if(mlineseg[i].yn == OUTPUT &&
               (mlineseg[i].xs != mlineseg[i].xe
                || mlineseg[i].ys != mlineseg[i].ye)) {
                draw_line(out_img, mlineseg[i].xs, mlineseg[i].ys, 
                          mlineseg[i].xe, mlineseg[i].ye, LINE_C, WIDTH);
                //             fprintf(stderr,"%d %d %d %d\n",
                // 		    mlineseg[i].xs,mlineseg[i].xe,
                // 		    mlineseg[i].ys,mlineseg[i].ye);
            }
        }
    }
}
