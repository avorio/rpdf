import unittest;
import math;
import numpy,pylab,os,scipy, scipy.ndimage;
from iulib import *;

##########################
#tests for narray
##########################
class narray(unittest.TestCase):
    def testnarray_fill_set(self):
        i=intarray(3,3);
        i.fill(4); 
        assert 4 == i.at(1,2),'narray: fill() fails';
        i.set(3,2,2)
        assert (i.length() == 3) and (i.at(0)== 3),'narray: set() fails';

    def testnarray_resize(self):
        i=intarray(3,3);
        i.resize(4,4);
        i.fill(2);
        i.length();
        if (i.length() != 16) or (i.at(2,2)!= 2):
            print('narray: resize() and fill() fails')

    def testnarray_makelike(self):
        i=intarray(3,3);
        f=floatarray(2,2,2);
        i.makelike(f);
        if (i.length() != 8) or (i.rank()!= 3):
            print('narray: makelike() fails')

    def testnarray_put(self):
        i=intarray(2,2,2);
        i.put(1,1,1,8);
        if 8!= i.at(1,1,1):
            print('narray: put() fails');

    def testnarray_append(self):
        i=intarray(2,2,2);
        i.fill(2);
        i1=intarray(2);
        temp=i1.at(0);
        i1.append(i);
        if i1.length() != 10 or temp != i1.at(0) or i1.at(9)!=2:
            print('narray: append() fails');

    def testnarray_swap_move(self):
        i=intarray(2,2,2);
        i.resize(10,10)
        i1=intarray(2);
        i1.swap(i)
        if i1.length() != 100 or i.length()!= 2 or i1.rank()!=2 or i.rank()!=1:
            print('narray: swap() fails');
        i.move(i1)
        if i1.length() != 0 or i.length()!= 100 :
            print('narray: move() fails');

    def testnarray_copy(self):
        i=intarray(2,2,2);
        i1=intarray(2);
        i.resize(2)
        i.fill(2)
        i1.fill(0)
        i1.copy(i)
        if i1.at(0)!=2 and i1.at(1)!=e:
            print('narray: copy() fails');

    def testnarray_operators(self):
        f=floatarray(2,2);
        f.fill(2)
        f+=f
        if (f.at(0,0)!=4) or (f.at(0,1)!=4) or (f.at(1,0)!=4) or (f.at(1,1)!=4):
            print('narray: +=() fails');

        f/=f
        if (f.at(0,0)!=1) or (f.at(0,1)!=1) or (f.at(1,0)!=1) or (f.at(1,1)!=1):
            print('narray: /=() fails');

        f+=f
        f*=f
        if (f.at(0,0)!=4) or (f.at(0,1)!=4) or (f.at(1,0)!=4) or (f.at(1,1)!=4):
            print('narray: *=() fails');

        f-=f
        if (f.at(0,0)!=0) or (f.at(0,1)!=0) or (f.at(1,0)!=0) or (f.at(1,1)!=0):
            print('narray: -=() fails');

        f=floatarray(2,2);
        f.fill(2)
        f+=2
        if (f.at(0,0)!=4) or (f.at(0,1)!=4) or (f.at(1,0)!=4) or (f.at(1,1)!=4):
            print('narray: +=() fails');

        f/=4
        if (f.at(0,0)!=1) or (f.at(0,1)!=1) or (f.at(1,0)!=1) or (f.at(1,1)!=1):
            print('narray: /=() fails');

        f+=1
        f*=2
        if (f.at(0,0)!=4) or (f.at(0,1)!=4) or (f.at(1,0)!=4) or (f.at(1,1)!=4):
            print('narray: *=() fails');

        f-=4
        if (f.at(0,0)!=0) or (f.at(0,1)!=0) or (f.at(1,0)!=0) or (f.at(1,1)!=0):
            print('narray: -=() fails');

        f=floatarray(2,2,3);
        f1=floatarray(2,2,2);
        f.fill(2)
        f1.fill(2)
        if f==f1:
            print('narray: ==() fails');

        f1.copy(f)
        if (not f==f1):
            print('narray: ==() fails');

        f1.fill(4)
        assert (not f==f1), 'narray: ==() fails';


suite = unittest.makeSuite(narray,'test')
runner = unittest.TextTestRunner()
runner.run(suite)
##########################
#tests for narray-utils
##########################
class narray_utils(unittest.TestCase):
    def test_iota(self):
        i=intarray()
        iota(i,10)
        if i.length()!= 10:
            print('narray-utils: iota() fails' );

    def test_min_max_absmax(self):
        i=intarray()
        iota(i,10)    
        i.put(3,-110)
        if max(i)!= 9 and min(i)!= -110 and absmax(i) != 110:
            print('narray-utils: max(), min()and absmax() fails' );
            
    def test_argmax_sum_argmin(self):
        i=intarray()
        iota(i,10)
        i.put(4,10)
        if argmax(i)!= 4 and sum(i)!= 51 and argmin(i)!=0:
            print('narray-utils: argmax(), argmin()and sum() fails' );

    def test_product(self):
        i=intarray()
        iota(i,3)
        i.put(0,7)
        if product(i)!= 14:
            print('narray-utils: product() fails' );

    def test_randomly_permute(self):
        i=intarray()
        iota(i,3)
        i.put(0,7)        
        print('Before randomizing values of intarray i');
        for j in range(0,i.length()):
            print(i.at(j));

        randomly_permute(i)
        print('After randomizing values of intarray i');
        for j in range(0,i.length()):
            print(i.at(j));

    def test_make_unit_vector(self):
        f=floatarray()
        make_unit_vector(f,3,0)
        if (f.at(0)!= 1.0) or (f.at(1)!=0) or (f.at(2)!=0):
            print('narray-utils: make_uni_vector() fails' );

    def test_dist2(self):
        f=floatarray()
        f1=floatarray()
        f2=floatarray()
        make_unit_vector(f1,3,0)
        make_unit_vector(f2,3,1)
        make_unit_vector(f,3,0)
        if (dist2(f,f1)!= 0.0) or (dist2(f,f2)*dist2(f,f2)-2>0.0001):
            print('narray-utils: dist2() fails' );

    def test_norm2_norm1(self):
        f=floatarray()
        f1=floatarray()
        make_unit_vector(f1,3,0)
        make_unit_vector(f,3,0)
        f.put(1,1)
        if norm2(f1)!= 1.0 or ((norm2(f)*norm2(f)-2) >0.0001):
            print('narray-utils: norm2() fails' );

        if norm1(f1)!= 1.0 or norm1(f)!=2:
            print('narray-utils: norm1() fails' );
            
    def test_normalize2_normalize1(self):
        f=floatarray()
        f1=floatarray()        
        iota(f,3);
        f1.makelike(f);
        f1.fill(1);
        add(f,f1);
        f1.copy(f);
        normalize2(f1)
        if (f1.at(1) - f.at(1)/norm2(f) ) > 0.0001:
            print('narray-utils: normalize2() fails' );

        f1.copy(f);
        normalize1(f1)
        if (f1.at(1) - f.at(1)/norm1(f) ) > 0.0001:
            print('narray-utils: normalize1() fails' );

    def test_fill_uniform(self):
        f1=floatarray()        
        f1=floatarray(2);
        fill_uniform(f1,0,1)
        if (f1.at(0) <= 0) or (f1.at(0) > 1) or (f1.at(1) <= 0) or (f1.at(1) > 1) or (f1.length() != 2):
            print('narray-utils: fill_uniform() fails' );

    def test_perturb(self):
        f1=floatarray()        
        f1=floatarray(2);
        perturb(f1,1)   
        if (f1.at(0) <= -1) or (f1.at(0) > 1) or (f1.at(1) <= -1) or (f1.at(1) > 1) or (f1.length() != 2):
            print('narray-utils: perturb() fails' );

    def test_reverse(self):
        f=floatarray()
        f1=floatarray()        
        f2=floatarray()        
        iota(f,3)
        f2.makelike(f);
        f2.fill(1);
        add(f,f2);
        f1.copy(f);
        reverse(f1)
        for i in range( 0,f.length() ):
            if ( f.at(i) != f1.at(f.length()-i-1) ):
                print ('narray-utils: reverse(narray <T> &) fails at ', i );

        iota(f,3)
        add(f,f2);
        reverse(f1,f)
        reverse(f)
        for i in range( 0,f.length() ):
            if ( f.at(i) != f1.at(i) ):
                print ('narray-utils: reverse(narray <T> &,narray <T> &)  fails at',i );

    def test_remove_left(self):
        f=floatarray()
        f1=floatarray()        
        iota(f,20)
        f1.copy(f)
        remove_left(f1,10)
        if f1.length() != 10:
            print('narray-utils: remove_left()  fails');

        for i in range( 0,f1.length() ):
            if ( f.at(i+10) != f1.at(i) ):
                print ('narray-utils: remove_left()  fails at',i );

    def test_add(self):
        f=floatarray()
        f1=floatarray()        
        f.resize(2,2,2);
        f1.copy(f);
        f.fill(10);
        f1.fill(0);
        add(f1,f);
        for i in range( 0,f1.dim(0) ):
            for j in range( 0,f1.dim(1) ):
                for k in range( 0,f1.dim(2) ):
                    if ( f.at(i,j,k) != f1.at(i,j,k) ):
                        print ('narray-utils: add(narray <T> &,narray <T> &)  fails at',i,j,k);

    def test_addscaled(self):
        f=floatarray()
        f1=floatarray()        
        f.resize(2,2,2);
        f1.copy(f);
        f.fill(10);
        f1.fill(0);
        addscaled(f1,f,0.8);
        for i in range( 0,f1.dim(0) ):
            for j in range( 0,f1.dim(1) ):
                for k in range( 0,f1.dim(2) ):
                    if ( (f.at(i,j,k) *0.8) != f1.at(i,j,k) ):
                        print ('narray-utils: addscaled(narray <T> &,narray <T> &)  fails at',i,j,k);

    def test_ext(self):
        f=floatarray()
        iota(f,10)
        if (ext(f,-1) != 0) or (ext(f,0) != 0) or (ext(f,11) != 9) or (ext(f,3) != 3) or (f.length() != 10):
            print('narray-utils: ext() fails' );

        f.resize(2,2)
        f.fill(3)
        if (ext(f,-1,-1) != 3) or (ext(f,4,4) != 3) or (f.length() != 4):
            print('narray-utils: ext() fails' );

    def test_bat(self):
        f=floatarray()
        iota(f,3)
        f+=2
        if (bat(f,-1,-1) != -1) or (bat(f,4,4) != 4) or (bat(f,2,2) != 4) or (f.length() != 3):
            print('narray-utils: bat() fails' );

        f.resize(2,2)
        f.fill(3)
        if (bat(f,-1,-1,2) != 2) or (bat(f,2,2,2) != 2) or (bat(f,1,1,2) != 3)or (f.length() != 4):
            print('narray-utils: bat() fails' );

    def test_remove_element(self):
        f=floatarray()
        iota(f,4)
        remove_element(f,1)
        if (f.at(1) != 2) or (f.at(2) != 3) or (f.length() != 3):
            print('narray-utils: remove_element() fails' );

    def test_remove_value(self):
        i=intarray(5)
        i.fill(3)
        remove_value(i,3)
        if  i.length() != 0:
            print('narray-utils: remove_value() fails' );

        i=intarray(5,5)
        i.fill(3)
        i.put(1,0,19)
        i.put(1,1,19)
        i.put(1,3,19)
        i.put(1,2,19)
        remove_value(i,3)
        if  i.length() != 4:
            print('narray-utils: remove_value() fails' );

    def test_first_index_of(self):
        i=intarray(10)
        i.fill(10)
        i.put(1,19)
        i.put(3,19)
        i.put(5,19)
        if(first_index_of(i,19)!=1):
            print('narray-utils: first_index_of() fails' );

    def test_insert_at(self):
        i=intarray(4)
        iota(i,4)
        insert_at(i,1)
        if (i.at(1) != 1) or (i.at(2) != 1) or (i.at(3) != 2) or (i.at(4) != 3)or (i.length() != 5):
            print('narray-utils: insert_at() fails' )

    def test_delete_at(self):
        i=intarray(4)
        iota(i,4)
        insert_at(i,1)
        j=intarray();
        iota(j,4);
        delete_at(i,1)
        for k in range(0,i.length()):
            if i.at(k) != j.at(k):
                print('narray-utils: delete_at() fails' )

    def test_insert_at1(self):
        i=intarray(4)
        iota(i,4)
        insert_at(i,1,10)
        if (i.at(1) != 10) or (i.at(2) != 1) or (i.at(3) != 2) or (i.at(4) != 3)or (i.length() != 5):
            print('narray-utils: insert_at() fails' );

    def test_clamp(self):
        if (clamp(2,1,5)!=2) or (clamp(-2,1,5)!=1) or (clamp(12,1,5)!=4):
            print('narray-utils: clamp() fails' )

    def test_clampscale(self):
        i=intarray(2,2,2)
        for k in range(0,2):
            i.put(k,0,0,k+2)
            i.put(k,0,1,k+2)
            i.put(k,1,0,k+2)
            i.put(k,1,1,k+2);

        j=intarray()
        clampscale(j,i,2,4)
        for k in range(0,2):
            if (j.at(k,0,0) != j.at(k,0,1)) or (j.at(k,1,0) != j.at(k,1,1)) or (j.at(k,0,0) != j.at(k,1,1)):
                print('narray-utils: clampscale() fails' )

    def test_contains_only(self):
        i=intarray(2,2,2)
        for k in range(0,2):
            i.put(k,0,0,k+2)
            i.put(k,0,1,k+2)
            i.put(k,1,0,k+2)
            i.put(k,1,1,k+2);

        j=intarray(2,2,2)        
        j.fill(29)
        if (contains_only(j,11) != False) and (contains_only(j,29)):
            print('narray-utils: contains_only() fails' )

        clampscale(j,i,2,4)
        if (contains_only(j,11,121) != False) and (contains_only(0,128)):
            print('narray-utils: contains_only() fails' )

    def test_get_dims(self):
        j=intarray()
        f=floatarray(30,5,20)
        get_dims(j,f)
        if (j.at(0) != 30) or (j.at(1) != 5) or (j.at(2) != 20) or (j.length() != 3):
            print('narray-utils: get_dims() fails' );

    def test_set_dims(self):
        j=intarray(2)
        j.put(0,2)
        j.put(1,3)
        f=floatarray(30,5,20)        
        set_dims(f,j)
        if (f.rank() != 2) or (f.dim(0) != 2) or (f.dim(1) != 3):
            print('narray-utils: set_dims() fails' )

suite = unittest.makeSuite(narray_utils,'test')
runner = unittest.TextTestRunner()
runner.run(suite)
##########################
#tests for narray-ops
##########################

class narray_ops(unittest.TestCase):
    def testnarray_add_sub_mul_div_ops(self):
        b=bytearray(2,2)
        b1=bytearray(2,2)
        b2=bytearray(2,2)
        b3=bytearray(2,2)
        b.fill(2);
        b1.fill(2);
        b2.fill(3);
        b3.fill(1);

        b1+=2
        add(b,b)
        if (not b1==b):
            print('narray-ops: add() fails' );

        b1+=b2
        add(b,b2)
        if (not b1==b):
            print('narray-ops: add() fails' )

        b1.fill(4)
        add(b,b2)
        add(b,b3)
        if (not b1==b):
            print('narray-ops: add() fails' )

        b1.copy(b)
        b1-=2
        sub(b,2)
        if (not b1==b):
            print('narray-ops: sub() fails' )

        b1-=b2
        sub(b,b2)
        if (not b1==b):
            print('narray-ops: sub() fails' )

        b1.fill(2)
        sub(b,b2,b3)
        if (not b1==b):
            print('narray-ops: sub() fails' )

        b1.fill(2)
        b1*=2
        mul(b,2)
        if (not b1==b):
            print('narray-ops: mul() fails' )

        b1*=b2
        mul(b,b2)
        if (not b1==b):
            print('narray-ops: mul() fails' )

        b1.fill(3)
        mul(b,b2,b3)
        if (not b1==b):
            print('narray-ops: mul() fails' )

        b1.fill(2)
        b1/=2
        div(b,2)
        if (not b1==b):
            print('narray-ops: div() fails' )

        b1/=b2
        div(b,b2)
        if (not b1==b):
            print('narray-ops: div() fails' )

        b1.fill(3)
        div(b,b2,b3)
        if (not b1==b):
            print('narray-ops: div() fails' )

    def testnarray_pow(self):
        b=bytearray(2,2)
        b1=bytearray(2,2)
        b2=bytearray(2,2)
        b3=bytearray(2,2)
        b1.fill(4)
        b.fill(2)
        pow(b,2)
        if (not b1==b):
            print('narray-ops: pow() fails' )

        b1.fill(8)
        b2.fill(3)
        b.fill(2)
        pow(b,b2)
        if (not b1==b):
            print('narray-ops: pow() fails' )

        b1.fill(1)
        b3.fill(0)
        b.fill(2)
        pow(b,b2,b3)
        if (not b1==b):
            print('narray-ops: pow() fails' )

    def testnarray_max(self):
        b=bytearray(2,2)
        b1=bytearray(2,2)
        b2=bytearray(2,2)
        b1.fill(3)
        b.fill(2)
        max(b,3)
        if (not b1==b):
            print('narray-ops: max() fails' )

        b1.fill(2)
        b.fill(2)
        max(b,1)
        if (not b1==b):
            print('narray-ops: max() fails' )

        b1.fill(3)
        b.fill(2)
        b2.fill(3)
        max(b,b2)
        if (not b1==b):
            print('narray-ops: max() fails' )

        b1.fill(2)
        b.fill(2)
        b2.fill(1)
        max(b,b2)
        if (not b1==b):
            print('narray-ops: max() fails' )

    def testnarray_min(self):
        b=bytearray(2,2)
        b1=bytearray(2,2)
        b2=bytearray(2,2)
        b1.fill(2)
        b.fill(2)
        min(b,3)
        if (not b1==b):
            print('narray-ops: min() fails' )

        b1.fill(1)
        b.fill(2)
        min(b,1)
        if (not b1==b):
            print('narray-ops: min() fails' )

        b1.fill(2)
        b.fill(2)
        b2.fill(3)
        min(b,b2)
        if (not b1==b):
            print('narray-ops: min() fails' )

        b1.fill(1)
        b.fill(2)
        b2.fill(1)
        min(b,b2)
        if (not b1==b):
            print('narray-ops: min() fails' )

    def testnarray_neg(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(-2)
        f.fill(2)
        neg(f)
        if (not f1==f):
            print('narray-ops: neg() fails' )


    def testnarray_abs(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(math.fabs(-2.5))
        f.fill(-2.5)
        abs(f)
        if (not f1==f):
            print('narray-ops: abs() fails' )

    def testnarray_log(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(math.log(2))
        f.fill(2)
        log(f)
        if (not f1==f):
            print('narray-ops: log() fails' )

    def testnarray_exp(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(math.exp(2))
        f.fill(2)
        exp(f)
        if (not f1==f):
            print('narray-ops: exp() fails' )

    def testnarray_sin(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(math.sin(2))
        f.fill(2)
        sin(f)
        if (not f1==f):
            print('narray-ops: sin() fails' )

    def testnarray_cos(self):
        f=floatarray(2,2)
        f1=floatarray(2,2)
        f1.fill(math.cos(2))
        f.fill(2)
        cos(f)
        if (not f1==f):
            print('narray-ops: sin() fails' )

suite = unittest.makeSuite(narray_ops,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
#tests for nustring
##########################
class nustring_test(unittest.TestCase):
    def testnustring_nuchar(self):
        a=nuchar();
        b=nuchar(10);
        if a.ord() != 0 or b.ord() != 10 or not (a!=b) or a==b:
            print('nuchar fails' )

    def testnustring(self):
        a=nustring("ABC");
        a.append(100)
        if chr(a.ord(2)) != 'C' or a.utf8Length() != 4 or a.as_string()!="ABCd":
            print('nustring fails' )

        b=nustring("abcd");
        if a==b or b!="abcd" or a!=nustring("ABCd"):
            print('nustring operators fails' )

suite = unittest.makeSuite(nustring_test,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

###############################
#tests for imgio and #dgraphics
###############################
class imgio(unittest.TestCase):
    def testimageio(self):
        image_b = bytearray();
        image_f = floatarray();
        image_i = intarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        #dinit(image_b.dim(0), image_b.dim(1),1);
        #dshow(image_b);
        #dwait();
        write_image_gray("out_gray.png",image_b);
        if not os.path.exists("out_gray.png") :
            print('imgio: write_image_gray fails' )
    
        read_image_rgb(image_b,"TestImages/lena.jpg");
        #dinit(image_b.dim(0), image_b.dim(1),1);
        #dshow(image_b);
        #dwait();
        write_image_rgb("out_rgb.png",image_b);
        if not os.path.exists("out_rgb.png") :
            print('imgio: write_image_rgb fails' )

        image_b1=bytearray();
        read_image_rgb(image_b1,"out_rgb.png")
        assert image_b1==image_b,'imageio:write_image_rgb fails';

        read_image_binary(image_b,"TestImages/lena.jpg");
        #dinit(image_b.dim(0), image_b.dim(1),1);
        #dshow(image_b);
        #dwait();
        write_image_binary("out_binary.png",image_b);
        if not os.path.exists("out_binary.png") :
            print('imgio: write_image_binary fails' )
        image_b1=bytearray();
        read_image_binary(image_b1,"out_binary.png")
        assert image_b1==image_b,'imageio:write_image_binary fails';

        read_image_packed(image_i,"TestImages/lena.jpg");
        #dinit(image_b.dim(0), image_b.dim(1),1);
        #dshowr(image_i);
        #dwait();
        write_image_packed("out_packed.png",image_i);
        if not os.path.exists("out_packed.png") :
            print('imgio: write_image_packed fails' )
        image_i1=intarray();
        read_image_packed(image_i1,"out_packed.png")
        assert image_i1==image_i,'imageio:write_image_packed fails';

        os.remove("out_gray.png")
        os.remove("out_rgb.png")
        os.remove("out_binary.png")
        os.remove("out_packed.png")

        #image_f.copy(image_i);
        #dshown(image_f);
        #dwait();
        #dshow_signed(image_f);
        #dwait();
        #dshow1d(image_f);
        #dwait();
        #dclose();

suite = unittest.makeSuite(imgio,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
#tests for imgedges
##########################
class imgedges(unittest.TestCase):
    def test_rawedges(self):
        image_b = bytearray();
        image_bm = bytearray();
        image_f = floatarray();
        image_fm = floatarray();        

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);
        rawedges(image_fm,image_f)
        image_bm.copy(image_fm);
        read_image_gray(image_b,"TestImages/rawedges.png");
        assert image_b==image_bm, 'imgio: rawedges fail';
        #dshown(image_fm);
        #dwait();
        
    def test_gradient(self):
        image_b = bytearray();
        image_bm = bytearray();
        image_bx = bytearray();
        image_by = bytearray();
        image_f = floatarray();
        image_fm = floatarray();
        image_fx = floatarray();
        image_fy = floatarray();        
        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        nonzero_fractile(image_fm,8);
        gradients(image_fm,image_fx,image_fy,image_f);
        image_bm.copy(image_fm);
        image_bx.copy(image_fx);
        image_by.copy(image_fy);
        read_image_gray(image_b,"TestImages/gradient_mean.png");
        assert image_b==image_bm, 'imgio: gradients fail';
        read_image_gray(image_b,"TestImages/gradient_x.png");
        assert image_b==image_bx, 'imgio: gradients fail';
        read_image_gray(image_b,"TestImages/gradient_y.png");
        assert image_b==image_by, 'imgio: gradients fail';        
        #dshown(image_fm);
        #dwait();
        #dshown(image_fx);
        #dwait();
        #dshown(image_fy);
        #dwait();

    def test_nomaxsup(self):
        image_b = bytearray();
        image_bm = bytearray();
        image_f = floatarray();
        image_fm = floatarray();
        image_fx = floatarray();
        image_fy = floatarray();        
        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        nonzero_fractile(image_fm,8);
        gradients(image_fm,image_fx,image_fy,image_f);        
        nonmaxsup(image_bm,image_fm,image_fx,image_fy);
        read_image_gray(image_b,"TestImages/nomaxsup.png");
        assert image_b==image_bm, 'imgio: nonmaxsup fail';
        #dshow(image_b);
        #dwait();
        
    def test_canny(self):
        image_b = bytearray();
        image_bm = bytearray();
        image_bx = bytearray();
        image_by = bytearray();
        image_f = floatarray();
        image_fm = floatarray();        
        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);        
        canny(image_fm,image_f,3.0,3.0)
        image_bm.copy(image_fm);
        read_image_gray(image_b,"TestImages/canny.png");
        assert image_b==image_bm, 'imgio: canny fail';
        #dshown(image_fm);
        #dwait();
        #dclose();
        #hysteresis_thresholding(image_f, 0.0, 255.0);
        #dshown(image_f);
        #dwait();

suite = unittest.makeSuite(imgedges,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
#tests for imgbrushfire
##########################


##########################
#tests for imgfilters
##########################
def d2(input, axis, output, mode, cval):
    return scipy.ndimage.correlate1d(input, [1, -2, 1], axis, output, mode, cval, 0)

class imgfilters(unittest.TestCase):
    
    def test_lapacian(self):
        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);

        plus_laplacian(image_fout,image_f)
        image_bout.copy(image_fout);
        
        #get both the orignal and filtered image into python
        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(512,512);
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(512,512);               
        
        #filter the image using ndimage
        img_fil_p=scipy.ndimage.generic_laplace(img_i,d2);
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgfilters: plus_laplacian fails';
        #dshown(image_fout);
        #dwait();
        
    def test_zero_crossings(self):
        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);

        zero_crossings(image_bout,image_f);
        #dshown(image_bout);
        #dwait();
        assert contains_only(image_bout,0), 'imgfilters: zero_crossings fails';


    def test_local_minima(self):
        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);
        local_minima(image_bout,image_f);
        count=0;
        for i in range(512):
            for j in range(512):
                #if (image_bout.at(i,j) != 0 or (image_bout.at(i,j) != 1) ):
                    #print 'imgfilters: local_minima fails';
                    #break;break;
                    
                if image_bout.at(i,j) != 0 : count= count +1;
                
        assert count == 1742, 'imgfilters: local_minima fails';
        #dshown(image_bout);
        #dwait();


    def test_local_maxima(self):

        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
#        dinit(image_f.dim(0), image_f.dim(1),1);

        local_maxima(image_bout,image_f);
        count=0
        for i in range(512):
            for j in range(512):
                #if (image_bout.at(i,j) != 0 or (image_bout.at(i,j) != 1) ):
                    #print 'imgfilters: local_minima fails';
                    #break;break;
                    
                if image_bout.at(i,j) != 0 : count= count +1;
                
        assert count == 1927, 'imgfilters: local_maxima fails';
        
#        dshown(image_bout);
#        dwait();


    def test_kitchen_rosenfeld(self):

        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);

        kitchen_rosenfeld_corners(image_fout,image_f)
        image_bout.copy(image_fout);
        read_image_gray(image_b,"TestImages/krcs.png");
        
        assert image_b==image_bout, 'imgfilters: kitchen_rosenfeld_corners fails'
        #dshown(image_fout);
        #dwait();

        kitchen_rosenfeld_corners2(image_fout,image_f)
        image_bout.copy(image_fout);
        read_image_gray(image_b,"TestImages/krcs2.png");
        assert image_b==image_bout, 'imgfilters: kitchen_rosenfeld_corners2 fails'
        
        #dshown(image_fout);
        #dwait();

    def test_gradient_based_corners(self):

        image_b = bytearray();
        image_bout = bytearray();
        image_f = floatarray();
        image_fout = floatarray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_f.copy(image_b);
        #dinit(image_f.dim(0), image_f.dim(1),1);

        gradient_based_corners(image_f);
        #dshown(image_f);
        #dwait();
        count=0
        for i in range(512):
            for j in range(512):
                if image_f.at(i,j) != 0 : count= count +1;
                
        assert count == 29, 'imgfilters: gradient_based_corners fails';
        

    def test_median_filter(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        image_bout.copy(image_b);
        #dinit(image_b.dim(0), image_b.dim(1),1);

        median_filter(image_bout, 3, 3);
        
        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(512,512);
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(512,512);               
        
        #filter the image using ndimage. Filter size of 7X7 and 8X8 is used to get the same effect
        img_fil_p=scipy.ndimage.median_filter(img_i,7);
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgfilters: plus_laplacian fails';
        
        
        #dshown(image_b);
        #dwait();
        #dclose();


suite = unittest.makeSuite(imgfilters,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
#tests for imggauss
##########################
class imggauss(unittest.TestCase):
    def test_gauss1d(self):
        f = floatarray();
        fout = floatarray();

        iota(f,20)
        gauss1d(fout, f,5);
        gauss1d(f,5);
        if not (fout == f):
            print('imggauss: gauss1d fails' )

        f = floatarray(200);
        x=scipy.arange(0,2,0.01);
        for i in range(200): f.put(i,scipy.sin(2*scipy.pi*x[i]));
        
        gauss1d(f,2)
        ai=scipy.fromstring(f.tostring(),dtype=scipy.float32)
        a_p=scipy.sin(2*scipy.pi*x);
        ap=scipy.ndimage.gaussian_filter(a_p,2)
        out=ap/ai
        count=0
        for i in range(200):
            if ( out[i] > 1.09 or  out[i] < 0.99 ): count += 1 ;

        #considering the boundary exceptions it should be 6           
        assert count == 6, 'imggauss: gauss1d fails error count = '+str(count); 

    def test_gauss2d(self):

        image_b = bytearray();
        image_bout = bytearray();    
        read_image_gray(image_b,"TestImages/lena.jpg");
# This does not work as gauss1d implementation in iulib is different from python implementation
        #image_bout.copy(image_b)
        #gauss2d(image_bout,2);
        #py_a=scipy.fromstring(image_b.tostring,dtype=scipy.uint8)
        #py_a.shape=(512,512)
        #py_a1=py_a.copy()
        #scipy.ndimage.gaussian_filter(py_a,5,0,py_a1);
        #py_a2=scipy.fromstring(image_b.tostring,dtype=scipy.uint8)
        #py_a2.shape=(512,512)
        #if not (py_a2.all() == py_a1.all()):
        #   print('imggauss: gauss2d fails' )
        #    
        gauss2d(image_b, 5,5);
        read_image_gray(image_bout,"TestImages/gauss2d.png");
        if not (image_bout == image_b):
            print('imggauss: gauss2d fails' )
        #dshown(image_b);
        #dwait();
        #dclose();
suite = unittest.makeSuite(imggauss,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
#tests for imggraymorph
##########################

class imggraymorph(unittest.TestCase):

    def test_gray_dilate(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        #dinit(image_b.dim(0), image_b.dim(1),1);

        #dshown(image_b);
        #dwait();
        complement(image_b)
        #dshown(image_b);
        #dwait();

        mask=bytearray(5,2);
        mask.fill(255);

        image_bout.copy(image_b);
        gray_dilate(image_bout, mask, 0, 0);

        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));               
        
        img_fil_p=scipy.ndimage.grey_dilation(img_i,(5,2)) 
        
        assert img_fil_p.all() == img_fil_i.all(), 'imggraymorph: gray_dilate fails'
        #dshown(image_bout);
        #dwait();

    def test_gray_erode(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        #dinit(image_b.dim(0), image_b.dim(1),1);

        #dshown(image_b);
        #dwait();
        complement(image_b)
        #dshown(image_b);
        #dwait();

        mask=bytearray(5,2);
        mask.fill(255);

        image_bout.copy(image_b);
        gray_erode(image_bout, mask, 0,0);

        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        
        img_fil_p=scipy.ndimage.grey_erosion(img_i,(5,2)) 
        
        assert img_fil_p.all() == img_fil_i.all(), 'imggraymorph: gray_erode fails'

    def test_gray_open(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        #dinit(image_b.dim(0), image_b.dim(1),1);

        #dshown(image_b);
        #dwait();
        complement(image_b)
        #dshown(image_b);
        #dwait();

        mask=bytearray(5,2);
        mask.fill(255);

        image_bout.copy(image_b);
        gray_open(image_bout, mask, 0,0);

        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        
        img_fil_p=scipy.ndimage.grey_opening(img_i,(5,2)) 
        
        assert img_fil_p.all() == img_fil_i.all(), 'imggraymorph: gray_open fails'

    def test_gray_close(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        #dinit(image_b.dim(0), image_b.dim(1),1);

        #dshown(image_b);
        #dwait();
        complement(image_b)
        #dshown(image_b);
        #dwait();

        mask=bytearray(5,2);
        mask.fill(255);

        image_bout.copy(image_b);
        gray_close(image_bout, mask, 2, 2);

        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        
        img_fil_p=scipy.ndimage.grey_closing(img_i,(5,2)) 
        
        assert img_fil_p.all() == img_fil_i.all(), 'imggraymorph: gray_close fails'

    def test_difference(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        image_bout.copy(image_b);
        difference(image_bout, image_b, 0, 0);
        assert contains_only(image_bout,0), 'imggraymorph: difference fails'
        
        image_bout.copy(image_b);
        difference(image_bout, image_b, 2, 2);
        difference(image_bout, image_b, 2, 2);
        assert image_bout==image_b, 'imggraymorph: difference fails'


    def test_minshift(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        complement(image_b)        
        image_bout.copy(image_b);
        minshift(image_bout, image_b, 0, 0);
        assert image_bout==image_b, 'imggraymorph: minshift fails'
        
        image_bout.copy(image_b);
        minshift(image_bout, image_b, 2,2,5);
        difference(image_bout,image_b,0,0);
        read_image_gray(image_b,"TestImages/minshifted.png");
        assert image_bout==image_b, 'imggraymorph: minshift fails'


    def test_maxshift(self):

        image_b = bytearray();
        image_bout = bytearray();

        read_image_gray(image_b,"TestImages/textbox.png");
        complement(image_b)        
        image_bout.copy(image_b);
        maxshift(image_bout, image_b, 0, 0);
        assert image_bout==image_b, 'imggraymorph: maxshift fails'
        
        image_bout.copy(image_b);
        maxshift(image_bout, image_b, 2,2,5);
        difference(image_bout,image_b,0,0);
        read_image_gray(image_b,"TestImages/maxshifted.png");
                
        assert image_bout==image_b, 'imggraymorph: maxshift fails'

    def test_maxdifference(self):

        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        complement(image_b)        
        image_bout.copy(image_b);
        temp=maxdifference(image_bout, image_b, 2,2)
        assert temp==0, 'imggraymorph: maxdifference fails'

        #maxdifference should be equal to offset passed to maxshift
        maxshift(image_bout, image_b, 2,2,10);
        temp=maxdifference(image_bout, image_b, 2,2)
        
        assert temp==10, 'imggraymorph: maxdifference fails'


suite = unittest.makeSuite(imggraymorph,'test')
runner = unittest.TextTestRunner()
runner.run(suite)

##########################
# tests for imgmorph
##########################

class imgmorph(unittest.TestCase):

    def test_make_binary(self):
        image_b = bytearray();

        read_image_gray(image_b,"TestImages/lena.jpg");
        make_binary(image_b);
        
        for i in range(512):
            for j in range(512):
                if (image_b.at(i,j) !=0 and  image_b.at(i,j) !=255): 
                    print 'imgmorph: make_binary fails'
                    return

    def test_check_binary(self):
        image_b = bytearray();
        read_image_gray(image_b,"TestImages/lena.jpg");
        make_binary(image_b);
        check_binary(image_b);

    def test_binary_invert(self):
        image_b = bytearray(3,3);
        image_b.fill(255)
        image_b.put(0,0,0)
        image_b.put(1,1,0)
        image_b.put(2,2,0)
        binary_invert(image_b);
                   
        for i in range(3):        
            for j in range(3):
                if ( (i!=j) and image_b.at(i,j) !=0 ): 
                    print 'imgmorph: binary_invert fails'
                    return

                if ( (i==j) and  image_b.at(i,i) !=255): 
                    print 'imgmorph: binary_invert fails'
                    return

    def test_binary_autoinvert(self):
        image_b = bytearray(3,3);
        image_b.fill(255)
        image_b.put(0,0,0)
        image_b.put(1,1,0)
        image_b.put(2,2,0)
        binary_autoinvert(image_b);
                   
        for i in range(3):        
            for j in range(3):
                if ( (i!=j) and image_b.at(i,j) !=0 ): 
                    print 'imgmorph: binary_autoinvert fails'
                    return

                if ( (i==j) and  image_b.at(i,i) !=255): 
                    print 'imgmorph: binary_autoinvert fails'
                    return

        image_b = bytearray(3,3);
        image_bout = bytearray(3,3);
        image_b.fill(0)
        image_b.put(0,0,255)
        image_b.put(1,1,255)
        image_b.put(2,2,255)
        image_bout.copy(image_b);
        binary_autoinvert(image_b);
        assert image_bout == image_b, 'imgmorph: binary_autoinvert fails'

    def test_complement(self):
    
        image_b = bytearray(3,3);
        image_b.fill(11);
        complement(image_b);
        
        assert contains_only(image_b,244),  'imgmorph: complement fails'
        image_b = bytearray(3,3);
        image_b.fill(255);
        complement(image_b);
        assert contains_only(image_b,0),  'imgmorph: complement fails'

    def test_difference(self):
    
        image_b = bytearray(3,3);
        image_bout = bytearray(3,3);
        image_b.fill(11);
        image_bout.fill(13);
        difference(image_bout,image_b,0,0);
        assert contains_only(image_bout,2),  'imgmorph: difference fails'

    def test_maxdifference(self):
    
        image_b = bytearray(3,3);
        image_bout = bytearray(3,3);
        image_b.fill(11);
        image_bout.fill(13);
        temp=maxdifference(image_bout, image_b, 0,0);
        assert temp==2,  'imgmorph: maxdifference fails'

    def test_binary_and(self):
    
        image_b = bytearray(3,3);
        image_bout = bytearray(3,3);
        image_b.fill(255);
        image_bout.fill(0);
        binary_and(image_b, image_bout);        
        assert contains_only(image_b,0),  'imgmorph: binary_and fails'

        image_b.fill(255);        
        image_bout.fill(0);        
        image_bout.put(0,0,255);
        image_bout.put(1,1,255);
        image_bout.put(1,1,255);
        binary_and(image_b, image_bout);
        assert image_b == image_bout,  'imgmorph: binary_and fails'
        

    def test_binary_or(self):
    
        image_b = bytearray(3,3);
        image_bout = bytearray(3,3);
        image_b.fill(0);
        image_bout.fill(255);
        binary_or(image_b, image_bout);        
        assert contains_only(image_b,255),  'imgmorph: binary_or fails'

        image_b.fill(0);        
        image_bout.fill(0);        
        image_bout.put(0,0,255);
        image_bout.put(1,1,255);
        image_bout.put(1,1,255);
        binary_or(image_b, image_bout);
        assert image_b == image_bout,  'imgmorph: binary_or fails'

    def test_binary_erode_circle(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        #dinit(image_bout.dim(0),image_bout.dim(1),1)
        #dshown(image_bout);
        #dwait()
        binary_erode_circle(image_bout,1);
        read_image_binary(image_b,'TestImages/brecircle.png')
        #make_binary(image_b);
        assert image_b == image_bout,  'imgmorph: binary_erode_circle fails'
        #dshown(image_bout);
        #dwait()


    def test_binary_dilate_circle(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_dilate_circle(image_bout,1);
        read_image_binary(image_b,'TestImages/bdcircle.png')
        assert image_b == image_bout,  'imgmorph: binary_dilate_circle fails'

    def test_binary_open_circle(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_open_circle(image_bout,1);
        read_image_binary(image_b,'TestImages/bocircle.png')
        assert image_b == image_bout,  'imgmorph: binary_open_circle fails'        

    def test_binary_close_circle(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_close_circle(image_bout,1);
        read_image_binary(image_b,'TestImages/bccircle.png')
        assert image_b == image_bout,  'imgmorph: binary_close_circle fails'        

    def test_binary_erode_rect(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_erode_rect(image_bout,2,2);
        
        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));        
        
        img_fil_p=scipy.ndimage.binary_erosion(img_i)
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgmorph: binary_erode_rect fails'
        

    def test_binary_dilate_rect(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_erode_rect(image_bout,2,2);
        
        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_p=scipy.ndimage.binary_dilation(img_i)
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgmorph: binary_dilate_rect fails'


    def test_binary_open_rect(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_open_rect(image_bout,2,2);

        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_p=scipy.ndimage.binary_opening(img_i)
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgmorph: binary_open_rect fails'

        
    def test_binary_close_rect(self):
    
        image_b = bytearray();
        image_bout = bytearray();
        read_image_gray(image_b,"TestImages/textbox.png");
        make_binary(image_b);
        binary_invert(image_b);
        image_bout.copy(image_b);
        binary_close_rect(image_bout,2,2);
        img_i=scipy.fromstring(image_b.tostring(),dtype=scipy.uint8)
        img_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_i=scipy.fromstring(image_bout.tostring(),dtype=scipy.uint8)
        img_fil_i.shape=(image_b.dim(0), image_b.dim(1));
        img_fil_p=scipy.ndimage.binary_closing(img_i)
        
        assert img_fil_p.all() == img_fil_i.all(), 'imgmorph: binary_close_rect fails'


suite = unittest.makeSuite(imgmorph,'test')
runner = unittest.TextTestRunner()
runner.run(suite)


##########################
#tests for imglabels
##########################

##########################
# tests for imgmap
##########################

##########################
# tests for imgops
##########################

##########################
# tests for imgrescale
##########################


exit()

