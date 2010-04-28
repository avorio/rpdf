/*
** Lua binding: graphics
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:50 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_graphics_open (lua_State* tolua_S);

#ifdef HAVE_SDL
#include <SDL/SDL.h>
#include <SDL/SDL_gfxPrimitives.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_imageFilter.h>
#endif
#include "dgraphics.h"
using namespace colib;
using namespace ocropus;

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"floatarray");
 tolua_usertype(tolua_S,"intarray");
 tolua_usertype(tolua_S,"bytearray");
}

/* function: dinit */
#ifndef TOLUA_DISABLE_tolua_graphics_dinit00
static int tolua_graphics_dinit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  int tolua_var_1 = ((int)  tolua_tonumber(tolua_S,1,0));
  int tolua_var_2 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  dinit(tolua_var_1,tolua_var_2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dinit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dclear */
#ifndef TOLUA_DISABLE_tolua_graphics_dclear00
static int tolua_graphics_dclear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  int rgb = ((int)  tolua_tonumber(tolua_S,1,32));
 try {
 {
  dclear(rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dclear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshow */
#ifndef TOLUA_DISABLE_tolua_graphics_dshow00
static int tolua_graphics_dshow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshow(*data,spec,angle,smooth,rgb);
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

/* function: dshow */
#ifndef TOLUA_DISABLE_tolua_graphics_dshow01
static int tolua_graphics_dshow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshow(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_graphics_dshow00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshow */
#ifndef TOLUA_DISABLE_tolua_graphics_dshow02
static int tolua_graphics_dshow02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshow(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_graphics_dshow01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshown */
#ifndef TOLUA_DISABLE_tolua_graphics_dshown00
static int tolua_graphics_dshown00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshown(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dshown'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshown */
#ifndef TOLUA_DISABLE_tolua_graphics_dshown01
static int tolua_graphics_dshown01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshown(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_graphics_dshown00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshown */
#ifndef TOLUA_DISABLE_tolua_graphics_dshown02
static int tolua_graphics_dshown02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshown(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_graphics_dshown01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dshowr */
#ifndef TOLUA_DISABLE_tolua_graphics_dshowr00
static int tolua_graphics_dshowr00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
  double angle = ((double)  tolua_tonumber(tolua_S,3,90));
  int smooth = ((int)  tolua_tonumber(tolua_S,4,1));
  int rgb = ((int)  tolua_tonumber(tolua_S,5,32));
 try {
 {
  dshowr(*data,spec,angle,smooth,rgb);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dshowr'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dwait */
#ifndef TOLUA_DISABLE_tolua_graphics_dwait00
static int tolua_graphics_dwait00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  dwait();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dwait'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_graphics_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_function(tolua_S,"dinit",tolua_graphics_dinit00);
 tolua_function(tolua_S,"dclear",tolua_graphics_dclear00);
 tolua_function(tolua_S,"dshow",tolua_graphics_dshow00);
 tolua_function(tolua_S,"dshow",tolua_graphics_dshow01);
 tolua_function(tolua_S,"dshow",tolua_graphics_dshow02);
 tolua_function(tolua_S,"dshown",tolua_graphics_dshown00);
 tolua_function(tolua_S,"dshown",tolua_graphics_dshown01);
 tolua_function(tolua_S,"dshown",tolua_graphics_dshown02);
 tolua_function(tolua_S,"dshowr",tolua_graphics_dshowr00);
 tolua_function(tolua_S,"dwait",tolua_graphics_dwait00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_graphics (lua_State* tolua_S) {
 return tolua_graphics_open(tolua_S);
};
#endif

