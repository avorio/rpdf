/*
** Lua binding: image
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:39 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_image_open (lua_State* tolua_S);

#include "colib.h"
#include "imgio.h"
#include "imglib.h"
using namespace colib;
using namespace imgio;
using namespace imglib;
typedef narray<rectangle> rectanglearray;
 namespace imgio {
    void read_png(bytearray &image,const char *file) { read_png(image,(FILE*)stdio(file,"r"),true); }
    void write_png(const char *file,bytearray &image) { write_png((FILE*)stdio(file,"w"),image); }
    void read_png_rgb(intarray &image,const char *file) { read_png_rgb(image,(FILE*)stdio(file,"r")); }
    void write_png_rgb(const char *file,intarray &image) { write_png_rgb((FILE*)stdio(file,"w"),image); }
 } 

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_IChainTracer (lua_State* tolua_S)
{
 IChainTracer* self = (IChainTracer*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"rectanglearray");
 tolua_usertype(tolua_S,"floatarray");
 tolua_usertype(tolua_S,"narray<point>");
 tolua_usertype(tolua_S,"IChainTracer");
 tolua_usertype(tolua_S,"FILE");
 tolua_usertype(tolua_S,"intarray");
 tolua_usertype(tolua_S,"bytearray");
}

/* function: read_image_gray */
#ifndef TOLUA_DISABLE_tolua_image_read_image_gray00
static int tolua_image_read_image_gray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_1 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* format = ((const char*)  tolua_tostring(tolua_S,3,NULL));
 try {
 {
  read_image_gray(*tolua_var_1,path,format);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_image_gray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_image_binary */
#ifndef TOLUA_DISABLE_tolua_image_read_image_binary00
static int tolua_image_read_image_binary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isstring(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_2 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* format = ((const char*)  tolua_tostring(tolua_S,3,NULL));
 try {
 {
  read_image_binary(*tolua_var_2,path,format);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_image_binary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_png */
#ifndef TOLUA_DISABLE_tolua_image_read_png00
static int tolua_image_read_png00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  read_png(*image,file);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_png'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_png */
#ifndef TOLUA_DISABLE_tolua_image_write_png00
static int tolua_image_write_png00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_png(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_png'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_png_rgb */
#ifndef TOLUA_DISABLE_tolua_image_read_png_rgb00
static int tolua_image_read_png_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  read_png_rgb(*image,file);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_png_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_png_rgb */
#ifndef TOLUA_DISABLE_tolua_image_write_png_rgb00
static int tolua_image_write_png_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_png_rgb(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_png_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_pnm_gray */
#ifndef TOLUA_DISABLE_tolua_image_read_pnm_gray00
static int tolua_image_read_pnm_gray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_3 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_pnm_gray(tolua_var_3,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_pnm_gray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm00
static int tolua_image_read_ppm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_4 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* r = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* g = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
 try {
 {
  read_ppm(tolua_var_4,*r,*g,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_ppm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm_packed */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm_packed00
static int tolua_image_read_ppm_packed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_5 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_ppm_packed(tolua_var_5,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_ppm_packed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm_rgb */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm_rgb00
static int tolua_image_read_ppm_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_6 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_ppm_rgb(tolua_var_6,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_ppm_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_pbm */
#ifndef TOLUA_DISABLE_tolua_image_write_pbm00
static int tolua_image_write_pbm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_7 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_pbm(tolua_var_7,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_pbm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_pgm */
#ifndef TOLUA_DISABLE_tolua_image_write_pgm00
static int tolua_image_write_pgm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_8 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_pgm(tolua_var_8,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_pgm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm00
static int tolua_image_write_ppm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_9 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* r = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* g = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
 try {
 {
  write_ppm(tolua_var_9,*r,*g,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_ppm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm_rgb */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm_rgb00
static int tolua_image_write_ppm_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_10 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_ppm_rgb(tolua_var_10,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_ppm_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm_packed */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm_packed00
static int tolua_image_write_ppm_packed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"FILE",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  FILE* tolua_var_11 = ((FILE*)  tolua_tousertype(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_ppm_packed(tolua_var_11,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write_ppm_packed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_pnm_gray */
#ifndef TOLUA_DISABLE_tolua_image_read_pnm_gray01
static int tolua_image_read_pnm_gray01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_pnm_gray(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_read_pnm_gray00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm01
static int tolua_image_read_ppm01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* r = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* g = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
 try {
 {
  read_ppm(file,*r,*g,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_read_ppm00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm_packed */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm_packed01
static int tolua_image_read_ppm_packed01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_ppm_packed(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_read_ppm_packed00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_ppm_rgb */
#ifndef TOLUA_DISABLE_tolua_image_read_ppm_rgb01
static int tolua_image_read_ppm_rgb01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_ppm_rgb(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_read_ppm_rgb00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_pbm */
#ifndef TOLUA_DISABLE_tolua_image_write_pbm01
static int tolua_image_write_pbm01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_pbm(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_write_pbm00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_pgm */
#ifndef TOLUA_DISABLE_tolua_image_write_pgm01
static int tolua_image_write_pgm01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_pgm(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_write_pgm00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm01
static int tolua_image_write_ppm01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* r = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* g = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
 try {
 {
  write_ppm(file,*r,*g,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_write_ppm00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm_rgb */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm_rgb01
static int tolua_image_write_ppm_rgb01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_ppm_rgb(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_write_ppm_rgb00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: write_ppm_packed */
#ifndef TOLUA_DISABLE_tolua_image_write_ppm_packed01
static int tolua_image_write_ppm_packed01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  write_ppm_packed(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_write_ppm_packed00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: read_jpeg_gray */
#ifndef TOLUA_DISABLE_tolua_image_read_jpeg_gray00
static int tolua_image_read_jpeg_gray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  FILE* f = ((FILE*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  read_jpeg_gray(*a,f);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read_jpeg_gray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: display */
#ifndef TOLUA_DISABLE_tolua_image_display00
static int tolua_image_display00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  display(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: display */
#ifndef TOLUA_DISABLE_tolua_image_display01
static int tolua_image_display01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  display(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_display00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_black */
#ifndef TOLUA_DISABLE_tolua_image_make_page_black00
static int tolua_image_make_page_black00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_page_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_page_black'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_normalized_and_black */
#ifndef TOLUA_DISABLE_tolua_image_make_page_normalized_and_black00
static int tolua_image_make_page_normalized_and_black00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_page_normalized_and_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_page_normalized_and_black'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_binary_and_black */
#ifndef TOLUA_DISABLE_tolua_image_make_page_binary_and_black00
static int tolua_image_make_page_binary_and_black00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_page_binary_and_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_page_binary_and_black'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_binary_and_black */
#ifndef TOLUA_DISABLE_tolua_image_make_page_binary_and_black01
static int tolua_image_make_page_binary_and_black01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_page_binary_and_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_make_page_binary_and_black00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: addscaled */
#ifndef TOLUA_DISABLE_tolua_image_addscaled00
static int tolua_image_addscaled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* tolua_var_12 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* tolua_var_13 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float tolua_var_14 = ((float)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_15 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_16 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  addscaled(*tolua_var_12,*tolua_var_13,tolua_var_14,tolua_var_15,tolua_var_16);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addscaled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: tighten */
#ifndef TOLUA_DISABLE_tolua_image_tighten00
static int tolua_image_tighten00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  tighten(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tighten'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: circ_by */
#ifndef TOLUA_DISABLE_tolua_image_circ_by00
static int tolua_image_circ_by00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int dx = ((int)  tolua_tonumber(tolua_S,2,0));
  int dy = ((int)  tolua_tonumber(tolua_S,3,0));
  float value = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  circ_by(*image,dx,dy,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'circ_by'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: shift_by */
#ifndef TOLUA_DISABLE_tolua_image_shift_by00
static int tolua_image_shift_by00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int dx = ((int)  tolua_tonumber(tolua_S,2,0));
  int dy = ((int)  tolua_tonumber(tolua_S,3,0));
  float value = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  shift_by(*image,dx,dy,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'shift_by'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pad_by */
#ifndef TOLUA_DISABLE_tolua_image_pad_by00
static int tolua_image_pad_by00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int px = ((int)  tolua_tonumber(tolua_S,2,0));
  int py = ((int)  tolua_tonumber(tolua_S,3,0));
  float value = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  pad_by(*image,px,py,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pad_by'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erase_boundary */
#ifndef TOLUA_DISABLE_tolua_image_erase_boundary00
static int tolua_image_erase_boundary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int px = ((int)  tolua_tonumber(tolua_S,2,0));
  int py = ((int)  tolua_tonumber(tolua_S,3,0));
  float value = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  erase_boundary(*image,px,py,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erase_boundary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: extract_subimage */
#ifndef TOLUA_DISABLE_tolua_image_extract_subimage00
static int tolua_image_extract_subimage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* subimage = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,4,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,5,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  extract_subimage(*subimage,*image,x0,y0,x1,y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extract_subimage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: resize_to */
#ifndef TOLUA_DISABLE_tolua_image_resize_to00
static int tolua_image_resize_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  float value = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  resize_to(*image,w,h,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: compose_at */
#ifndef TOLUA_DISABLE_tolua_image_compose_at00
static int tolua_image_compose_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* source = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
  int value = ((int)  tolua_tonumber(tolua_S,5,0));
  int conflict = ((int)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  compose_at(*image,*source,x,y,value,conflict);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'compose_at'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: addscaled */
#ifndef TOLUA_DISABLE_tolua_image_addscaled01
static int tolua_image_addscaled01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_17 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* tolua_var_18 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float tolua_var_19 = ((float)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_20 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_21 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  addscaled(*tolua_var_17,*tolua_var_18,tolua_var_19,tolua_var_20,tolua_var_21);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_addscaled00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: tighten */
#ifndef TOLUA_DISABLE_tolua_image_tighten01
static int tolua_image_tighten01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  tighten(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_tighten00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: circ_by */
#ifndef TOLUA_DISABLE_tolua_image_circ_by01
static int tolua_image_circ_by01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int dx = ((int)  tolua_tonumber(tolua_S,2,0));
  int dy = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned char value = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  circ_by(*image,dx,dy,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_circ_by00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: shift_by */
#ifndef TOLUA_DISABLE_tolua_image_shift_by01
static int tolua_image_shift_by01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int dx = ((int)  tolua_tonumber(tolua_S,2,0));
  int dy = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned char value = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  shift_by(*image,dx,dy,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_shift_by00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pad_by */
#ifndef TOLUA_DISABLE_tolua_image_pad_by01
static int tolua_image_pad_by01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int px = ((int)  tolua_tonumber(tolua_S,2,0));
  int py = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned char value = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  pad_by(*image,px,py,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_pad_by00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: erase_boundary */
#ifndef TOLUA_DISABLE_tolua_image_erase_boundary01
static int tolua_image_erase_boundary01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int px = ((int)  tolua_tonumber(tolua_S,2,0));
  int py = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned char value = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  erase_boundary(*image,px,py,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_erase_boundary00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: extract_subimage */
#ifndef TOLUA_DISABLE_tolua_image_extract_subimage01
static int tolua_image_extract_subimage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* subimage = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,4,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,5,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  extract_subimage(*subimage,*image,x0,y0,x1,y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_extract_subimage00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: resize_to */
#ifndef TOLUA_DISABLE_tolua_image_resize_to01
static int tolua_image_resize_to01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  unsigned char value = ((unsigned char)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  resize_to(*image,w,h,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_resize_to00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: compose_at */
#ifndef TOLUA_DISABLE_tolua_image_compose_at01
static int tolua_image_compose_at01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* source = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
  int value = ((int)  tolua_tonumber(tolua_S,5,0));
  int conflict = ((int)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  compose_at(*image,*source,x,y,value,conflict);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_compose_at00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: extract_subimage */
#ifndef TOLUA_DISABLE_tolua_image_extract_subimage02
static int tolua_image_extract_subimage02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* subimage = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,4,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,5,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  extract_subimage(*subimage,*image,x0,y0,x1,y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_extract_subimage01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: linearly_transform_intensity */
#ifndef TOLUA_DISABLE_tolua_image_linearly_transform_intensity00
static int tolua_image_linearly_transform_intensity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_22 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_23 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_24 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_25 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_26 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  linearly_transform_intensity(*tolua_var_22,tolua_var_23,tolua_var_24,tolua_var_25,tolua_var_26);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'linearly_transform_intensity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: linearly_transform_intensity */
#ifndef TOLUA_DISABLE_tolua_image_linearly_transform_intensity01
static int tolua_image_linearly_transform_intensity01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_27 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_28 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_29 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_30 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_31 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  linearly_transform_intensity(*tolua_var_27,tolua_var_28,tolua_var_29,tolua_var_30,tolua_var_31);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_linearly_transform_intensity00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: linearly_transform_intensity */
#ifndef TOLUA_DISABLE_tolua_image_linearly_transform_intensity02
static int tolua_image_linearly_transform_intensity02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_32 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_33 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_34 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_35 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_36 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  linearly_transform_intensity(*tolua_var_32,tolua_var_33,tolua_var_34,tolua_var_35,tolua_var_36);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_linearly_transform_intensity01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gamma_transform */
#ifndef TOLUA_DISABLE_tolua_image_gamma_transform00
static int tolua_image_gamma_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_37 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_38 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_39 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_40 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_41 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  gamma_transform(*tolua_var_37,tolua_var_38,tolua_var_39,tolua_var_40,tolua_var_41);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gamma_transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: gamma_transform */
#ifndef TOLUA_DISABLE_tolua_image_gamma_transform01
static int tolua_image_gamma_transform01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_42 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_43 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_44 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_45 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_46 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  gamma_transform(*tolua_var_42,tolua_var_43,tolua_var_44,tolua_var_45,tolua_var_46);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gamma_transform00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gamma_transform */
#ifndef TOLUA_DISABLE_tolua_image_gamma_transform02
static int tolua_image_gamma_transform02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_47 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_48 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_49 = ((float)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_50 = ((float)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_51 = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  gamma_transform(*tolua_var_47,tolua_var_48,tolua_var_49,tolua_var_50,tolua_var_51);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gamma_transform01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: expand_range */
#ifndef TOLUA_DISABLE_tolua_image_expand_range00
static int tolua_image_expand_range00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_52 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_53 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_54 = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  expand_range(*tolua_var_52,tolua_var_53,tolua_var_54);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'expand_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: expand_range */
#ifndef TOLUA_DISABLE_tolua_image_expand_range01
static int tolua_image_expand_range01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_55 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_56 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_57 = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  expand_range(*tolua_var_55,tolua_var_56,tolua_var_57);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_expand_range00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: expand_range */
#ifndef TOLUA_DISABLE_tolua_image_expand_range02
static int tolua_image_expand_range02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_58 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_59 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_60 = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  expand_range(*tolua_var_58,tolua_var_59,tolua_var_60);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_expand_range01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss1d */
#ifndef TOLUA_DISABLE_tolua_image_gauss1d00
static int tolua_image_gauss1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float sigma = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  gauss1d(*out,*in,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gauss1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss1d */
#ifndef TOLUA_DISABLE_tolua_image_gauss1d01
static int tolua_image_gauss1d01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float sigma = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  gauss1d(*v,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gauss1d00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss2d */
#ifndef TOLUA_DISABLE_tolua_image_gauss2d00
static int tolua_image_gauss2d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float sx = ((float)  tolua_tonumber(tolua_S,2,0));
  float sy = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  gauss2d(*a,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gauss2d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss1d */
#ifndef TOLUA_DISABLE_tolua_image_gauss1d02
static int tolua_image_gauss1d02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float sigma = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  gauss1d(*out,*in,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gauss1d01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss1d */
#ifndef TOLUA_DISABLE_tolua_image_gauss1d03
static int tolua_image_gauss1d03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* v = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float sigma = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  gauss1d(*v,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gauss1d02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: gauss2d */
#ifndef TOLUA_DISABLE_tolua_image_gauss2d01
static int tolua_image_gauss2d01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float sx = ((float)  tolua_tonumber(tolua_S,2,0));
  float sy = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  gauss2d(*a,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_gauss2d00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rawedges */
#ifndef TOLUA_DISABLE_tolua_image_rawedges00
static int tolua_image_rawedges00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* edges = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* smoothed = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rawedges(*edges,*smoothed);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rawedges'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: nonzero_fractile */
#ifndef TOLUA_DISABLE_tolua_image_nonzero_fractile00
static int tolua_image_nonzero_fractile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* edges = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float frac = ((float)  tolua_tonumber(tolua_S,2,0));
  int nbins = ((int)  tolua_tonumber(tolua_S,3,1000));
 try {
 {
  float tolua_ret = (float)  nonzero_fractile(*edges,frac,nbins);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nonzero_fractile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: hysteresis_thresholding */
#ifndef TOLUA_DISABLE_tolua_image_hysteresis_thresholding00
static int tolua_image_hysteresis_thresholding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float lo = ((float)  tolua_tonumber(tolua_S,2,0));
  float hi = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  hysteresis_thresholding(*image,lo,hi);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hysteresis_thresholding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: thin */
#ifndef TOLUA_DISABLE_tolua_image_thin00
static int tolua_image_thin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* tolua_var_61 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  thin(*tolua_var_61);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'thin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_image of class  IChainTracer */
#ifndef TOLUA_DISABLE_tolua_image_IChainTracer_set_image00
static int tolua_image_IChainTracer_set_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IChainTracer",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IChainTracer* self = (IChainTracer*)  tolua_tousertype(tolua_S,1,0);
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_image'",NULL);
#endif
 try {
 {
  self->set_image(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  IChainTracer */
#ifndef TOLUA_DISABLE_tolua_image_IChainTracer_clear00
static int tolua_image_IChainTracer_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IChainTracer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IChainTracer* self = (IChainTracer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'",NULL);
#endif
 try {
 {
  self->clear();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_chain of class  IChainTracer */
#ifndef TOLUA_DISABLE_tolua_image_IChainTracer_get_chain00
static int tolua_image_IChainTracer_get_chain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IChainTracer",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IChainTracer* self = (IChainTracer*)  tolua_tousertype(tolua_S,1,0);
  floatarray* points = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  bool close = ((bool)  tolua_toboolean(tolua_S,3,false));
  int sample = ((int)  tolua_tonumber(tolua_S,4,1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_chain'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->get_chain(*points,close,sample);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_chain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_poly of class  IChainTracer */
#ifndef TOLUA_DISABLE_tolua_image_IChainTracer_get_poly00
static int tolua_image_IChainTracer_get_poly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IChainTracer",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IChainTracer* self = (IChainTracer*)  tolua_tousertype(tolua_S,1,0);
  floatarray* points = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1.0));
  bool close = ((bool)  tolua_toboolean(tolua_S,4,false));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_poly'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->get_poly(*points,maxdist,close);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_poly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  IChainTracer */
#ifndef TOLUA_DISABLE_tolua_image_IChainTracer_delete00
static int tolua_image_IChainTracer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IChainTracer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IChainTracer* self = (IChainTracer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
 try {
 Mtolua_delete(self);
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: chaintracer */
#ifndef TOLUA_DISABLE_tolua_image_chaintracer00
static int tolua_image_chaintracer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  IChainTracer* tolua_ret = (IChainTracer*)  chaintracer(*image);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IChainTracer");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'chaintracer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_2 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_200
static int tolua_image_brushfire_200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,2,1e30));
 try {
 {
  brushfire_2(*distance,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'brushfire_2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_1 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_100
static int tolua_image_brushfire_100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,2,1e30));
 try {
 {
  brushfire_1(*distance,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'brushfire_1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_inf */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_inf00
static int tolua_image_brushfire_inf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,2,1e30));
 try {
 {
  brushfire_inf(*distance,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'brushfire_inf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_2 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_201
static int tolua_image_brushfire_201(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"narray<point>",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  narray<point>* source = ((narray<point>*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_2(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_200(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_1 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_101
static int tolua_image_brushfire_101(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"narray<point>",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  narray<point>* source = ((narray<point>*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_1(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_100(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_inf */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_inf01
static int tolua_image_brushfire_inf01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"narray<point>",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  narray<point>* source = ((narray<point>*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_inf(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_inf00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_2 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_202
static int tolua_image_brushfire_202(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* source = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_2(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_201(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_1 */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_102
static int tolua_image_brushfire_102(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* source = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_1(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_101(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_inf */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_inf02
static int tolua_image_brushfire_inf02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* source = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,3,1e30));
 try {
 {
  brushfire_inf(*distance,*source,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_brushfire_inf01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate_1 */
#ifndef TOLUA_DISABLE_tolua_image_dilate_100
static int tolua_image_dilate_100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  dilate_1(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate_2 */
#ifndef TOLUA_DISABLE_tolua_image_dilate_200
static int tolua_image_dilate_200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  dilate_2(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate_inf */
#ifndef TOLUA_DISABLE_tolua_image_dilate_inf00
static int tolua_image_dilate_inf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  dilate_inf(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_inf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode_1 */
#ifndef TOLUA_DISABLE_tolua_image_erode_100
static int tolua_image_erode_100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  erode_1(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode_2 */
#ifndef TOLUA_DISABLE_tolua_image_erode_200
static int tolua_image_erode_200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  erode_2(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode_inf */
#ifndef TOLUA_DISABLE_tolua_image_erode_inf00
static int tolua_image_erode_inf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  erode_inf(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_inf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_inf_scaled */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_inf_scaled00
static int tolua_image_brushfire_inf_scaled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float sx = ((float)  tolua_tonumber(tolua_S,2,0));
  float sy = ((float)  tolua_tonumber(tolua_S,3,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,4,1e38));
 try {
 {
  brushfire_inf_scaled(*distance,sx,sy,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'brushfire_inf_scaled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: brushfire_2_scaled */
#ifndef TOLUA_DISABLE_tolua_image_brushfire_2_scaled00
static int tolua_image_brushfire_2_scaled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* distance = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
  float b = ((float)  tolua_tonumber(tolua_S,3,0));
  float c = ((float)  tolua_tonumber(tolua_S,4,0));
  float d = ((float)  tolua_tonumber(tolua_S,5,0));
  float maxdist = ((float)  tolua_tonumber(tolua_S,6,1e38));
 try {
 {
  brushfire_2_scaled(*distance,a,b,c,d,maxdist);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'brushfire_2_scaled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: propagate_labels */
#ifndef TOLUA_DISABLE_tolua_image_propagate_labels00
static int tolua_image_propagate_labels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  propagate_labels(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propagate_labels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: propagate_labels_to */
#ifndef TOLUA_DISABLE_tolua_image_propagate_labels_to00
static int tolua_image_propagate_labels_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* target = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* seed = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  propagate_labels_to(*target,*seed);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'propagate_labels_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_dontcares */
#ifndef TOLUA_DISABLE_tolua_image_remove_dontcares00
static int tolua_image_remove_dontcares00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  remove_dontcares(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove_dontcares'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: renumber_labels */
#ifndef TOLUA_DISABLE_tolua_image_renumber_labels00
static int tolua_image_renumber_labels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int start = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  int tolua_ret = (int)  renumber_labels(*image,start);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'renumber_labels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: label_components */
#ifndef TOLUA_DISABLE_tolua_image_label_components00
static int tolua_image_label_components00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bool four_connected = ((bool)  tolua_toboolean(tolua_S,2,false));
 try {
 {
  int tolua_ret = (int)  label_components(*image,four_connected);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'label_components'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: simple_recolor */
#ifndef TOLUA_DISABLE_tolua_image_simple_recolor00
static int tolua_image_simple_recolor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  simple_recolor(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'simple_recolor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bounding_boxes */
#ifndef TOLUA_DISABLE_tolua_image_bounding_boxes00
static int tolua_image_bounding_boxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* result = ((rectanglearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bounding_boxes(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounding_boxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rotate_direct_sample */
#ifndef TOLUA_DISABLE_tolua_image_rotate_direct_sample00
static int tolua_image_rotate_direct_sample00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  float cx = ((float)  tolua_tonumber(tolua_S,4,0));
  float cy = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rotate_direct_sample(*out,*in,angle,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate_direct_sample'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rotate_direct_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_rotate_direct_interpolate00
static int tolua_image_rotate_direct_interpolate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  float cx = ((float)  tolua_tonumber(tolua_S,4,0));
  float cy = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rotate_direct_interpolate(*out,*in,angle,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate_direct_interpolate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_sample */
#ifndef TOLUA_DISABLE_tolua_image_scale_sample00
static int tolua_image_scale_sample00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float sx = ((float)  tolua_tonumber(tolua_S,3,0));
  float sy = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_sample(*out,*in,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale_sample'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_sample */
#ifndef TOLUA_DISABLE_tolua_image_scale_sample01
static int tolua_image_scale_sample01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int nx = ((int)  tolua_tonumber(tolua_S,3,0));
  int ny = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_sample(*out,*in,nx,ny);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_sample00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_scale_interpolate00
static int tolua_image_scale_interpolate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float sx = ((float)  tolua_tonumber(tolua_S,3,0));
  float sy = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_interpolate(*out,*in,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scale_interpolate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_scale_interpolate01
static int tolua_image_scale_interpolate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int nx = ((int)  tolua_tonumber(tolua_S,3,0));
  int ny = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_interpolate(*out,*in,nx,ny);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_interpolate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rotate_direct_sample */
#ifndef TOLUA_DISABLE_tolua_image_rotate_direct_sample01
static int tolua_image_rotate_direct_sample01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  float cx = ((float)  tolua_tonumber(tolua_S,4,0));
  float cy = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rotate_direct_sample(*out,*in,angle,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_rotate_direct_sample00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rotate_direct_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_rotate_direct_interpolate01
static int tolua_image_rotate_direct_interpolate01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  float cx = ((float)  tolua_tonumber(tolua_S,4,0));
  float cy = ((float)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rotate_direct_interpolate(*out,*in,angle,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_rotate_direct_interpolate00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_sample */
#ifndef TOLUA_DISABLE_tolua_image_scale_sample02
static int tolua_image_scale_sample02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float sx = ((float)  tolua_tonumber(tolua_S,3,0));
  float sy = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_sample(*out,*in,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_sample01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_sample */
#ifndef TOLUA_DISABLE_tolua_image_scale_sample03
static int tolua_image_scale_sample03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int nx = ((int)  tolua_tonumber(tolua_S,3,0));
  int ny = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_sample(*out,*in,nx,ny);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_sample02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_scale_interpolate02
static int tolua_image_scale_interpolate02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  float sx = ((float)  tolua_tonumber(tolua_S,3,0));
  float sy = ((float)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_interpolate(*out,*in,sx,sy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_interpolate01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: scale_interpolate */
#ifndef TOLUA_DISABLE_tolua_image_scale_interpolate03
static int tolua_image_scale_interpolate03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int nx = ((int)  tolua_tonumber(tolua_S,3,0));
  int ny = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  scale_interpolate(*out,*in,nx,ny);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_scale_interpolate02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: horn_riley_ridges */
#ifndef TOLUA_DISABLE_tolua_image_horn_riley_ridges00
static int tolua_image_horn_riley_ridges00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* im = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* zero = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* strength = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
  floatarray* angle = ((floatarray*)  tolua_tousertype(tolua_S,4,0));
 try {
 {
  horn_riley_ridges(*im,*zero,*strength,*angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'horn_riley_ridges'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: laplacian */
#ifndef TOLUA_DISABLE_tolua_image_laplacian00
static int tolua_image_laplacian00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* result = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  laplacian(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'laplacian'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: zero_crossings */
#ifndef TOLUA_DISABLE_tolua_image_zero_crossings00
static int tolua_image_zero_crossings00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* result = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  zero_crossings(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'zero_crossings'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: local_minima */
#ifndef TOLUA_DISABLE_tolua_image_local_minima00
static int tolua_image_local_minima00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* result = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  local_minima(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'local_minima'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: local_maxima */
#ifndef TOLUA_DISABLE_tolua_image_local_maxima00
static int tolua_image_local_maxima00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* result = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  local_maxima(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'local_maxima'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: gradient_based_corners */
#ifndef TOLUA_DISABLE_tolua_image_gradient_based_corners00
static int tolua_image_gradient_based_corners00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  gradient_based_corners(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gradient_based_corners'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: kitchen_rosenfeld_corners */
#ifndef TOLUA_DISABLE_tolua_image_kitchen_rosenfeld_corners00
static int tolua_image_kitchen_rosenfeld_corners00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* corners = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  kitchen_rosenfeld_corners(*corners,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'kitchen_rosenfeld_corners'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: kitchen_rosenfeld_corners2 */
#ifndef TOLUA_DISABLE_tolua_image_kitchen_rosenfeld_corners200
static int tolua_image_kitchen_rosenfeld_corners200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* corners = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  kitchen_rosenfeld_corners2(*corners,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'kitchen_rosenfeld_corners2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: median_filter */
#ifndef TOLUA_DISABLE_tolua_image_median_filter00
static int tolua_image_median_filter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  median_filter(*image,rx,ry);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'median_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_boolean */
#ifndef TOLUA_DISABLE_tolua_image_make_boolean00
static int tolua_image_make_boolean00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_boolean(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_boolean'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: complement */
#ifndef TOLUA_DISABLE_tolua_image_complement00
static int tolua_image_complement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  complement(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'complement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: difference */
#ifndef TOLUA_DISABLE_tolua_image_difference00
static int tolua_image_difference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image2 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  difference(*image,*image2,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'difference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: maxdifference */
#ifndef TOLUA_DISABLE_tolua_image_maxdifference00
static int tolua_image_maxdifference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image2 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  int tolua_ret = (int)  maxdifference(*image,*image2,cx,cy);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'maxdifference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: minshift */
#ifndef TOLUA_DISABLE_tolua_image_minshift00
static int tolua_image_minshift00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image2 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  minshift(*image,*image2,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'minshift'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: maxshift */
#ifndef TOLUA_DISABLE_tolua_image_maxshift00
static int tolua_image_maxshift00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image2 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  maxshift(*image,*image2,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'maxshift'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode */
#ifndef TOLUA_DISABLE_tolua_image_erode00
static int tolua_image_erode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  erode(*image,*mask,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate */
#ifndef TOLUA_DISABLE_tolua_image_dilate00
static int tolua_image_dilate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  dilate(*image,*mask,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: open */
#ifndef TOLUA_DISABLE_tolua_image_open00
static int tolua_image_open00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  open(*image,*mask,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: close */
#ifndef TOLUA_DISABLE_tolua_image_close00
static int tolua_image_close00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  close(*image,*mask,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode_circle */
#ifndef TOLUA_DISABLE_tolua_image_erode_circle00
static int tolua_image_erode_circle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  erode_circle(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_circle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate_circle */
#ifndef TOLUA_DISABLE_tolua_image_dilate_circle00
static int tolua_image_dilate_circle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  dilate_circle(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_circle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: open_circle */
#ifndef TOLUA_DISABLE_tolua_image_open_circle00
static int tolua_image_open_circle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  open_circle(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_circle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: close_circle */
#ifndef TOLUA_DISABLE_tolua_image_close_circle00
static int tolua_image_close_circle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  close_circle(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_circle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: erode_rect */
#ifndef TOLUA_DISABLE_tolua_image_erode_rect00
static int tolua_image_erode_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int rw = ((int)  tolua_tonumber(tolua_S,2,0));
  int rh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  erode_rect(*image,rw,rh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dilate_rect */
#ifndef TOLUA_DISABLE_tolua_image_dilate_rect00
static int tolua_image_dilate_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int rw = ((int)  tolua_tonumber(tolua_S,2,0));
  int rh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  dilate_rect(*image,rw,rh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: open_rect */
#ifndef TOLUA_DISABLE_tolua_image_open_rect00
static int tolua_image_open_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int rw = ((int)  tolua_tonumber(tolua_S,2,0));
  int rh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  open_rect(*image,rw,rh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: close_rect */
#ifndef TOLUA_DISABLE_tolua_image_close_rect00
static int tolua_image_close_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int rw = ((int)  tolua_tonumber(tolua_S,2,0));
  int rh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  close_rect(*image,rw,rh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: valleys */
#ifndef TOLUA_DISABLE_tolua_image_valleys00
static int tolua_image_valleys00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* locations = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int minsize = ((int)  tolua_tonumber(tolua_S,3,0));
  int maxsize = ((int)  tolua_tonumber(tolua_S,4,1<<30));
  float sigma = ((float)  tolua_tonumber(tolua_S,5,0.0));
 try {
 {
  valleys(*locations,*v,minsize,maxsize,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'valleys'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: peaks */
#ifndef TOLUA_DISABLE_tolua_image_peaks00
static int tolua_image_peaks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* locations = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int minsize = ((int)  tolua_tonumber(tolua_S,3,0));
  int maxsize = ((int)  tolua_tonumber(tolua_S,4,1<<30));
  float sigma = ((float)  tolua_tonumber(tolua_S,5,0.0));
 try {
 {
  peaks(*locations,*v,minsize,maxsize,sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'peaks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: math2raster */
#ifndef TOLUA_DISABLE_tolua_image_math2raster00
static int tolua_image_math2raster00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* tolua_var_62 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* tolua_var_63 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  math2raster(*tolua_var_62,*tolua_var_63);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'math2raster'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: math2raster */
#ifndef TOLUA_DISABLE_tolua_image_math2raster01
static int tolua_image_math2raster01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_64 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* tolua_var_65 = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  math2raster(*tolua_var_64,*tolua_var_65);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_math2raster00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: math2raster */
#ifndef TOLUA_DISABLE_tolua_image_math2raster02
static int tolua_image_math2raster02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_66 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* tolua_var_67 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  math2raster(*tolua_var_66,*tolua_var_67);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_math2raster01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: raster2math */
#ifndef TOLUA_DISABLE_tolua_image_raster2math00
static int tolua_image_raster2math00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* tolua_var_68 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* tolua_var_69 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  raster2math(*tolua_var_68,*tolua_var_69);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'raster2math'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: raster2math */
#ifndef TOLUA_DISABLE_tolua_image_raster2math01
static int tolua_image_raster2math01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_70 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* tolua_var_71 = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  raster2math(*tolua_var_70,*tolua_var_71);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_raster2math00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: raster2math */
#ifndef TOLUA_DISABLE_tolua_image_raster2math02
static int tolua_image_raster2math02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_72 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* tolua_var_73 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  raster2math(*tolua_var_72,*tolua_var_73);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_image_raster2math01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_image_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_function(tolua_S,"read_image_gray",tolua_image_read_image_gray00);
 tolua_function(tolua_S,"read_image_binary",tolua_image_read_image_binary00);
 tolua_function(tolua_S,"read_png",tolua_image_read_png00);
 tolua_function(tolua_S,"write_png",tolua_image_write_png00);
 tolua_function(tolua_S,"read_png_rgb",tolua_image_read_png_rgb00);
 tolua_function(tolua_S,"write_png_rgb",tolua_image_write_png_rgb00);
 tolua_function(tolua_S,"read_pnm_gray",tolua_image_read_pnm_gray00);
 tolua_function(tolua_S,"read_ppm",tolua_image_read_ppm00);
 tolua_function(tolua_S,"read_ppm_packed",tolua_image_read_ppm_packed00);
 tolua_function(tolua_S,"read_ppm_rgb",tolua_image_read_ppm_rgb00);
 tolua_function(tolua_S,"write_pbm",tolua_image_write_pbm00);
 tolua_function(tolua_S,"write_pgm",tolua_image_write_pgm00);
 tolua_function(tolua_S,"write_ppm",tolua_image_write_ppm00);
 tolua_function(tolua_S,"write_ppm_rgb",tolua_image_write_ppm_rgb00);
 tolua_function(tolua_S,"write_ppm_packed",tolua_image_write_ppm_packed00);
 tolua_function(tolua_S,"read_pnm_gray",tolua_image_read_pnm_gray01);
 tolua_function(tolua_S,"read_ppm",tolua_image_read_ppm01);
 tolua_function(tolua_S,"read_ppm_packed",tolua_image_read_ppm_packed01);
 tolua_function(tolua_S,"read_ppm_rgb",tolua_image_read_ppm_rgb01);
 tolua_function(tolua_S,"write_pbm",tolua_image_write_pbm01);
 tolua_function(tolua_S,"write_pgm",tolua_image_write_pgm01);
 tolua_function(tolua_S,"write_ppm",tolua_image_write_ppm01);
 tolua_function(tolua_S,"write_ppm_rgb",tolua_image_write_ppm_rgb01);
 tolua_function(tolua_S,"write_ppm_packed",tolua_image_write_ppm_packed01);
 tolua_function(tolua_S,"read_jpeg_gray",tolua_image_read_jpeg_gray00);
 tolua_function(tolua_S,"display",tolua_image_display00);
 tolua_function(tolua_S,"display",tolua_image_display01);
 tolua_function(tolua_S,"make_page_black",tolua_image_make_page_black00);
 tolua_function(tolua_S,"make_page_normalized_and_black",tolua_image_make_page_normalized_and_black00);
 tolua_function(tolua_S,"make_page_binary_and_black",tolua_image_make_page_binary_and_black00);
 tolua_function(tolua_S,"make_page_binary_and_black",tolua_image_make_page_binary_and_black01);
 tolua_function(tolua_S,"addscaled",tolua_image_addscaled00);
 tolua_function(tolua_S,"tighten",tolua_image_tighten00);
 tolua_function(tolua_S,"circ_by",tolua_image_circ_by00);
 tolua_function(tolua_S,"shift_by",tolua_image_shift_by00);
 tolua_function(tolua_S,"pad_by",tolua_image_pad_by00);
 tolua_function(tolua_S,"erase_boundary",tolua_image_erase_boundary00);
 tolua_function(tolua_S,"extract_subimage",tolua_image_extract_subimage00);
 tolua_function(tolua_S,"resize_to",tolua_image_resize_to00);
 tolua_function(tolua_S,"compose_at",tolua_image_compose_at00);
 tolua_function(tolua_S,"addscaled",tolua_image_addscaled01);
 tolua_function(tolua_S,"tighten",tolua_image_tighten01);
 tolua_function(tolua_S,"circ_by",tolua_image_circ_by01);
 tolua_function(tolua_S,"shift_by",tolua_image_shift_by01);
 tolua_function(tolua_S,"pad_by",tolua_image_pad_by01);
 tolua_function(tolua_S,"erase_boundary",tolua_image_erase_boundary01);
 tolua_function(tolua_S,"extract_subimage",tolua_image_extract_subimage01);
 tolua_function(tolua_S,"resize_to",tolua_image_resize_to01);
 tolua_function(tolua_S,"compose_at",tolua_image_compose_at01);
 tolua_function(tolua_S,"extract_subimage",tolua_image_extract_subimage02);
 tolua_function(tolua_S,"linearly_transform_intensity",tolua_image_linearly_transform_intensity00);
 tolua_function(tolua_S,"linearly_transform_intensity",tolua_image_linearly_transform_intensity01);
 tolua_function(tolua_S,"linearly_transform_intensity",tolua_image_linearly_transform_intensity02);
 tolua_function(tolua_S,"gamma_transform",tolua_image_gamma_transform00);
 tolua_function(tolua_S,"gamma_transform",tolua_image_gamma_transform01);
 tolua_function(tolua_S,"gamma_transform",tolua_image_gamma_transform02);
 tolua_function(tolua_S,"expand_range",tolua_image_expand_range00);
 tolua_function(tolua_S,"expand_range",tolua_image_expand_range01);
 tolua_function(tolua_S,"expand_range",tolua_image_expand_range02);
 tolua_function(tolua_S,"gauss1d",tolua_image_gauss1d00);
 tolua_function(tolua_S,"gauss1d",tolua_image_gauss1d01);
 tolua_function(tolua_S,"gauss2d",tolua_image_gauss2d00);
 tolua_function(tolua_S,"gauss1d",tolua_image_gauss1d02);
 tolua_function(tolua_S,"gauss1d",tolua_image_gauss1d03);
 tolua_function(tolua_S,"gauss2d",tolua_image_gauss2d01);
 tolua_function(tolua_S,"rawedges",tolua_image_rawedges00);
 tolua_function(tolua_S,"nonzero_fractile",tolua_image_nonzero_fractile00);
 tolua_function(tolua_S,"hysteresis_thresholding",tolua_image_hysteresis_thresholding00);
 tolua_function(tolua_S,"thin",tolua_image_thin00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"IChainTracer","IChainTracer","",tolua_collect_IChainTracer);
 #else
 tolua_cclass(tolua_S,"IChainTracer","IChainTracer","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"IChainTracer");
  tolua_function(tolua_S,"set_image",tolua_image_IChainTracer_set_image00);
  tolua_function(tolua_S,"clear",tolua_image_IChainTracer_clear00);
  tolua_function(tolua_S,"get_chain",tolua_image_IChainTracer_get_chain00);
  tolua_function(tolua_S,"get_poly",tolua_image_IChainTracer_get_poly00);
  tolua_function(tolua_S,"delete",tolua_image_IChainTracer_delete00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"chaintracer",tolua_image_chaintracer00);
 tolua_function(tolua_S,"brushfire_2",tolua_image_brushfire_200);
 tolua_function(tolua_S,"brushfire_1",tolua_image_brushfire_100);
 tolua_function(tolua_S,"brushfire_inf",tolua_image_brushfire_inf00);
 tolua_function(tolua_S,"brushfire_2",tolua_image_brushfire_201);
 tolua_function(tolua_S,"brushfire_1",tolua_image_brushfire_101);
 tolua_function(tolua_S,"brushfire_inf",tolua_image_brushfire_inf01);
 tolua_function(tolua_S,"brushfire_2",tolua_image_brushfire_202);
 tolua_function(tolua_S,"brushfire_1",tolua_image_brushfire_102);
 tolua_function(tolua_S,"brushfire_inf",tolua_image_brushfire_inf02);
 tolua_function(tolua_S,"dilate_1",tolua_image_dilate_100);
 tolua_function(tolua_S,"dilate_2",tolua_image_dilate_200);
 tolua_function(tolua_S,"dilate_inf",tolua_image_dilate_inf00);
 tolua_function(tolua_S,"erode_1",tolua_image_erode_100);
 tolua_function(tolua_S,"erode_2",tolua_image_erode_200);
 tolua_function(tolua_S,"erode_inf",tolua_image_erode_inf00);
 tolua_function(tolua_S,"brushfire_inf_scaled",tolua_image_brushfire_inf_scaled00);
 tolua_function(tolua_S,"brushfire_2_scaled",tolua_image_brushfire_2_scaled00);
 tolua_function(tolua_S,"propagate_labels",tolua_image_propagate_labels00);
 tolua_function(tolua_S,"propagate_labels_to",tolua_image_propagate_labels_to00);
 tolua_function(tolua_S,"remove_dontcares",tolua_image_remove_dontcares00);
 tolua_function(tolua_S,"renumber_labels",tolua_image_renumber_labels00);
 tolua_function(tolua_S,"label_components",tolua_image_label_components00);
 tolua_function(tolua_S,"simple_recolor",tolua_image_simple_recolor00);
 tolua_function(tolua_S,"bounding_boxes",tolua_image_bounding_boxes00);
 tolua_function(tolua_S,"rotate_direct_sample",tolua_image_rotate_direct_sample00);
 tolua_function(tolua_S,"rotate_direct_interpolate",tolua_image_rotate_direct_interpolate00);
 tolua_function(tolua_S,"scale_sample",tolua_image_scale_sample00);
 tolua_function(tolua_S,"scale_sample",tolua_image_scale_sample01);
 tolua_function(tolua_S,"scale_interpolate",tolua_image_scale_interpolate00);
 tolua_function(tolua_S,"scale_interpolate",tolua_image_scale_interpolate01);
 tolua_function(tolua_S,"rotate_direct_sample",tolua_image_rotate_direct_sample01);
 tolua_function(tolua_S,"rotate_direct_interpolate",tolua_image_rotate_direct_interpolate01);
 tolua_function(tolua_S,"scale_sample",tolua_image_scale_sample02);
 tolua_function(tolua_S,"scale_sample",tolua_image_scale_sample03);
 tolua_function(tolua_S,"scale_interpolate",tolua_image_scale_interpolate02);
 tolua_function(tolua_S,"scale_interpolate",tolua_image_scale_interpolate03);
 tolua_function(tolua_S,"horn_riley_ridges",tolua_image_horn_riley_ridges00);
 tolua_function(tolua_S,"laplacian",tolua_image_laplacian00);
 tolua_function(tolua_S,"zero_crossings",tolua_image_zero_crossings00);
 tolua_function(tolua_S,"local_minima",tolua_image_local_minima00);
 tolua_function(tolua_S,"local_maxima",tolua_image_local_maxima00);
 tolua_function(tolua_S,"gradient_based_corners",tolua_image_gradient_based_corners00);
 tolua_function(tolua_S,"kitchen_rosenfeld_corners",tolua_image_kitchen_rosenfeld_corners00);
 tolua_function(tolua_S,"kitchen_rosenfeld_corners2",tolua_image_kitchen_rosenfeld_corners200);
 tolua_function(tolua_S,"median_filter",tolua_image_median_filter00);
 tolua_function(tolua_S,"make_boolean",tolua_image_make_boolean00);
 tolua_function(tolua_S,"complement",tolua_image_complement00);
 tolua_function(tolua_S,"difference",tolua_image_difference00);
 tolua_function(tolua_S,"maxdifference",tolua_image_maxdifference00);
 tolua_function(tolua_S,"minshift",tolua_image_minshift00);
 tolua_function(tolua_S,"maxshift",tolua_image_maxshift00);
 tolua_function(tolua_S,"erode",tolua_image_erode00);
 tolua_function(tolua_S,"dilate",tolua_image_dilate00);
 tolua_function(tolua_S,"open",tolua_image_open00);
 tolua_function(tolua_S,"close",tolua_image_close00);
 tolua_function(tolua_S,"erode_circle",tolua_image_erode_circle00);
 tolua_function(tolua_S,"dilate_circle",tolua_image_dilate_circle00);
 tolua_function(tolua_S,"open_circle",tolua_image_open_circle00);
 tolua_function(tolua_S,"close_circle",tolua_image_close_circle00);
 tolua_function(tolua_S,"erode_rect",tolua_image_erode_rect00);
 tolua_function(tolua_S,"dilate_rect",tolua_image_dilate_rect00);
 tolua_function(tolua_S,"open_rect",tolua_image_open_rect00);
 tolua_function(tolua_S,"close_rect",tolua_image_close_rect00);
 tolua_function(tolua_S,"valleys",tolua_image_valleys00);
 tolua_function(tolua_S,"peaks",tolua_image_peaks00);
 tolua_function(tolua_S,"math2raster",tolua_image_math2raster00);
 tolua_function(tolua_S,"math2raster",tolua_image_math2raster01);
 tolua_function(tolua_S,"math2raster",tolua_image_math2raster02);
 tolua_function(tolua_S,"raster2math",tolua_image_raster2math00);
 tolua_function(tolua_S,"raster2math",tolua_image_raster2math01);
 tolua_function(tolua_S,"raster2math",tolua_image_raster2math02);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_image (lua_State* tolua_S) {
 return tolua_image_open(tolua_S);
};
#endif

