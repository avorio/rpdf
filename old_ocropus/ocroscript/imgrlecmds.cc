/*
** Lua binding: imgrlecmds
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:43 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_imgrlecmds_open (lua_State* tolua_S);

#include "narray.h"
#include "coords.h"
#include "imglib.h"
#include "imgbits.h"
#include "imgrle.h"
 using namespace colib;
 using namespace imglib;
 using namespace imgbits;
 using namespace imgrle;
 typedef narray<rectangle> rectanglearray;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_RLEImage (lua_State* tolua_S)
{
 RLEImage* self = (RLEImage*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"floatarray");
 tolua_usertype(tolua_S,"rectanglearray");
 tolua_usertype(tolua_S,"RLEImage");
 tolua_usertype(tolua_S,"intarray");
 tolua_usertype(tolua_S,"bytearray");
}

/* method: new of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_new00
static int tolua_imgrlecmds_rle_RLEImage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RLEImage* tolua_ret = (RLEImage*)  Mtolua_new(RLEImage());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"RLEImage");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_new00_local
static int tolua_imgrlecmds_rle_RLEImage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RLEImage* tolua_ret = (RLEImage*)  Mtolua_new(RLEImage());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"RLEImage");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_delete00
static int tolua_imgrlecmds_rle_RLEImage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_dim00
static int tolua_imgrlecmds_rle_RLEImage_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  int d = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dim'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->dim(d);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dim'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_resize00
static int tolua_imgrlecmds_rle_RLEImage_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0,d1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fill of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_fill00
static int tolua_imgrlecmds_rle_RLEImage_fill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  bool tolua_var_1 = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fill'",NULL);
#endif
 try {
 {
  self->fill(tolua_var_1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: equals of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_equals00
static int tolua_imgrlecmds_rle_RLEImage_equals00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  RLEImage* other = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'equals'",NULL);
#endif
 try {
 {
  self->equals(*other);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'equals'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: take of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_take00
static int tolua_imgrlecmds_rle_RLEImage_take00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  RLEImage* other = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'take'",NULL);
#endif
 try {
 {
  self->take(*other);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'take'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: copy of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_copy00
static int tolua_imgrlecmds_rle_RLEImage_copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
  RLEImage* other = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'copy'",NULL);
#endif
 try {
 {
  self->copy(*other);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: number_of_runs of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_number_of_runs00
static int tolua_imgrlecmds_rle_RLEImage_number_of_runs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'number_of_runs'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->number_of_runs();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'number_of_runs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: megabytes of class  RLEImage */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_RLEImage_megabytes00
static int tolua_imgrlecmds_rle_RLEImage_megabytes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* self = (RLEImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'megabytes'",NULL);
#endif
 try {
 {
  double tolua_ret = (double)  self->megabytes();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'megabytes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_transpose */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_transpose00
static int tolua_imgrlecmds_rle_transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* out = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* in = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rle_transpose(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transpose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_transpose */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_transpose01
static int tolua_imgrlecmds_rle_transpose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rle_transpose(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgrlecmds_rle_transpose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_rotate_rect */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_rotate_rect00
static int tolua_imgrlecmds_rle_rotate_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int angle = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rle_rotate_rect(*image,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_convert */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_convert00
static int tolua_imgrlecmds_rle_convert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* out = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rle_convert(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_convert */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_convert01
static int tolua_imgrlecmds_rle_convert01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* in = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rle_convert(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgrlecmds_rle_convert00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_count_bits */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_count_bits00
static int tolua_imgrlecmds_rle_count_bits00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,2,~0));
  int x1 = ((int)  tolua_tonumber(tolua_S,3,~0));
  int y0 = ((int)  tolua_tonumber(tolua_S,4,~0));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,~0));
 try {
 {
  int tolua_ret = (int)  rle_count_bits(*image,x0,x1,y0,y1);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'count_bits'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_invert */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_invert00
static int tolua_imgrlecmds_rle_invert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rle_invert(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'invert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_and */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_And00
static int tolua_imgrlecmds_rle_And00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* mask = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
  int d0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rle_and(*image,*mask,d0,d1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'And'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_or */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_Or00
static int tolua_imgrlecmds_rle_Or00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* mask = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
  int d0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rle_or(*image,*mask,d0,d1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Or'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_dilate_rect */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_dilate_rect00
static int tolua_imgrlecmds_rle_dilate_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_dilate_rect(*image,r0,r1);
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

/* function: rle_erode_rect */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_erode_rect00
static int tolua_imgrlecmds_rle_erode_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_erode_rect(*image,r0,r1);
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

/* function: rle_erode_mask */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_erode_mask00
static int tolua_imgrlecmds_rle_erode_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* mask = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rle_erode_mask(*image,*mask,r0,r1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_open_rect */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_open_rect00
static int tolua_imgrlecmds_rle_open_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_open_rect(*image,r0,r1);
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

/* function: rle_close_rect */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_close_rect00
static int tolua_imgrlecmds_rle_close_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_close_rect(*image,r0,r1);
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

/* function: rle_skew */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_skew00
static int tolua_imgrlecmds_rle_skew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  float skew = ((float)  tolua_tonumber(tolua_S,2,0));
  float center = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_skew(*image,skew,center);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'skew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_rotate */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_rotate00
static int tolua_imgrlecmds_rle_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  float angle = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rle_rotate(*image,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_flip_v */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_flip_v00
static int tolua_imgrlecmds_rle_flip_v00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rle_flip_v(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'flip_v'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_bounding_boxes */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_bounding_boxes00
static int tolua_imgrlecmds_rle_bounding_boxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* boxes = ((rectanglearray*)  tolua_tousertype(tolua_S,1,0));
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  int tolua_ret = (int)  rle_bounding_boxes(*boxes,*image);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounding_boxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_runlength_statistics */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_runlength_statistics00
static int tolua_imgrlecmds_rle_runlength_statistics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* on = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* off = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  rle_runlength_statistics(*on,*off,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runlength_statistics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_peak_estimation */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_runlength_peaks00
static int tolua_imgrlecmds_rle_runlength_peaks00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* h0 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* h1 = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  intarray* v0 = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  intarray* v1 = ((intarray*)  tolua_tousertype(tolua_S,4,0));
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,5,0));
  float sh = ((float)  tolua_tonumber(tolua_S,6,3.0));
  float sv = ((float)  tolua_tonumber(tolua_S,7,3.0));
 try {
 {
  rle_peak_estimation(*h0,*h1,*v0,*v1,*image,sh,sv);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runlength_peaks'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_write */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_write00
static int tolua_imgrlecmds_rle_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rle_write(file,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'write'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_read */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_read00
static int tolua_imgrlecmds_rle_read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  rle_read(*image,file);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'read'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_dshow */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_dshow00
static int tolua_imgrlecmds_rle_dshow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
 try {
 {
  rle_dshow(*image,spec);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dshow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_circular_mask */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_circular_mask00
static int tolua_imgrlecmds_rle_circular_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rle_circular_mask(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'circular_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_dilate_runs */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_dilate_runs00
static int tolua_imgrlecmds_rle_dilate_runs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rle_dilate_runs(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_runs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_erode_runs */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_erode_runs00
static int tolua_imgrlecmds_rle_erode_runs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rle_erode_runs(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_runs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_debug */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_debug00
static int tolua_imgrlecmds_rle_debug00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rle_debug(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_dilate_rect_runlength */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_dilate_rect_runlength00
static int tolua_imgrlecmds_rle_dilate_rect_runlength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_dilate_rect_runlength(*image,r0,r1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_rect_runlength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rle_erode_rect_runlength */
#ifndef TOLUA_DISABLE_tolua_imgrlecmds_rle_erode_rect_runlength00
static int tolua_imgrlecmds_rle_erode_rect_runlength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"RLEImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RLEImage* image = ((RLEImage*)  tolua_tousertype(tolua_S,1,0));
  int r0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int r1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rle_erode_rect_runlength(*image,r0,r1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_rect_runlength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_imgrlecmds_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_module(tolua_S,"rle",0);
 tolua_beginmodule(tolua_S,"rle");
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"RLEImage","RLEImage","",tolua_collect_RLEImage);
  #else
  tolua_cclass(tolua_S,"RLEImage","RLEImage","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"RLEImage");
   tolua_function(tolua_S,"new",tolua_imgrlecmds_rle_RLEImage_new00);
   tolua_function(tolua_S,"new_local",tolua_imgrlecmds_rle_RLEImage_new00_local);
   tolua_function(tolua_S,".call",tolua_imgrlecmds_rle_RLEImage_new00_local);
   tolua_function(tolua_S,"delete",tolua_imgrlecmds_rle_RLEImage_delete00);
   tolua_function(tolua_S,"dim",tolua_imgrlecmds_rle_RLEImage_dim00);
   tolua_function(tolua_S,"resize",tolua_imgrlecmds_rle_RLEImage_resize00);
   tolua_function(tolua_S,"fill",tolua_imgrlecmds_rle_RLEImage_fill00);
   tolua_function(tolua_S,"equals",tolua_imgrlecmds_rle_RLEImage_equals00);
   tolua_function(tolua_S,"take",tolua_imgrlecmds_rle_RLEImage_take00);
   tolua_function(tolua_S,"copy",tolua_imgrlecmds_rle_RLEImage_copy00);
   tolua_function(tolua_S,"number_of_runs",tolua_imgrlecmds_rle_RLEImage_number_of_runs00);
   tolua_function(tolua_S,"megabytes",tolua_imgrlecmds_rle_RLEImage_megabytes00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"transpose",tolua_imgrlecmds_rle_transpose00);
  tolua_function(tolua_S,"transpose",tolua_imgrlecmds_rle_transpose01);
  tolua_function(tolua_S,"rotate_rect",tolua_imgrlecmds_rle_rotate_rect00);
  tolua_function(tolua_S,"convert",tolua_imgrlecmds_rle_convert00);
  tolua_function(tolua_S,"convert",tolua_imgrlecmds_rle_convert01);
  tolua_function(tolua_S,"count_bits",tolua_imgrlecmds_rle_count_bits00);
  tolua_function(tolua_S,"invert",tolua_imgrlecmds_rle_invert00);
  tolua_function(tolua_S,"And",tolua_imgrlecmds_rle_And00);
  tolua_function(tolua_S,"Or",tolua_imgrlecmds_rle_Or00);
  tolua_function(tolua_S,"dilate_rect",tolua_imgrlecmds_rle_dilate_rect00);
  tolua_function(tolua_S,"erode_rect",tolua_imgrlecmds_rle_erode_rect00);
  tolua_function(tolua_S,"erode_mask",tolua_imgrlecmds_rle_erode_mask00);
  tolua_function(tolua_S,"open_rect",tolua_imgrlecmds_rle_open_rect00);
  tolua_function(tolua_S,"close_rect",tolua_imgrlecmds_rle_close_rect00);
  tolua_function(tolua_S,"skew",tolua_imgrlecmds_rle_skew00);
  tolua_function(tolua_S,"rotate",tolua_imgrlecmds_rle_rotate00);
  tolua_function(tolua_S,"flip_v",tolua_imgrlecmds_rle_flip_v00);
  tolua_function(tolua_S,"bounding_boxes",tolua_imgrlecmds_rle_bounding_boxes00);
  tolua_function(tolua_S,"runlength_statistics",tolua_imgrlecmds_rle_runlength_statistics00);
  tolua_function(tolua_S,"runlength_peaks",tolua_imgrlecmds_rle_runlength_peaks00);
  tolua_function(tolua_S,"write",tolua_imgrlecmds_rle_write00);
  tolua_function(tolua_S,"read",tolua_imgrlecmds_rle_read00);
  tolua_function(tolua_S,"dshow",tolua_imgrlecmds_rle_dshow00);
  tolua_function(tolua_S,"circular_mask",tolua_imgrlecmds_rle_circular_mask00);
  tolua_function(tolua_S,"dilate_runs",tolua_imgrlecmds_rle_dilate_runs00);
  tolua_function(tolua_S,"erode_runs",tolua_imgrlecmds_rle_erode_runs00);
  tolua_function(tolua_S,"debug",tolua_imgrlecmds_rle_debug00);
  tolua_function(tolua_S,"dilate_rect_runlength",tolua_imgrlecmds_rle_dilate_rect_runlength00);
  tolua_function(tolua_S,"erode_rect_runlength",tolua_imgrlecmds_rle_erode_rect_runlength00);
 tolua_endmodule(tolua_S);

 { /* begin embedded lua code */
  int top = lua_gettop(tolua_S);
  static unsigned char B[] = {
  10, 82, 76, 69, 73,109, 97,103,101, 32, 61, 32,114,108,101,
   46, 82, 76, 69, 73,109, 97,103,101,32
  };
  tolua_dobuffer(tolua_S,(char*)B,sizeof(B),"tolua: embedded Lua code 1");
  lua_settop(tolua_S, top);
 } /* end of embedded lua code */

 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_imgrlecmds (lua_State* tolua_S) {
 return tolua_imgrlecmds_open(tolua_S);
};
#endif

