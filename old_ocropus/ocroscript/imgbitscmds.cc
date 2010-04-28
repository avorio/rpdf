/*
** Lua binding: imgbitscmds
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:41 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_imgbitscmds_open (lua_State* tolua_S);

#include "narray.h"
#include "coords.h"
#include "imgbits.h"
#include "imgrle.h"
 using namespace colib;
 using namespace imgbits;
 using namespace imgrle;
 typedef narray<rectangle> rectanglearray;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_BitImage (lua_State* tolua_S)
{
 BitImage* self = (BitImage*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"floatarray");
 tolua_usertype(tolua_S,"BitImage");
 tolua_usertype(tolua_S,"bytearray");
 tolua_usertype(tolua_S,"word32");
}

/* method: new of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_new00
static int tolua_imgbitscmds_bits_BitImage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  BitImage* tolua_ret = (BitImage*)  Mtolua_new(BitImage());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"BitImage");
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

/* method: new_local of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_new00_local
static int tolua_imgbitscmds_bits_BitImage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  BitImage* tolua_ret = (BitImage*)  Mtolua_new(BitImage());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"BitImage");
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

/* method: new of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_new01
static int tolua_imgbitscmds_bits_BitImage_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  BitImage* tolua_ret = (BitImage*)  Mtolua_new(BitImage(w,h));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"BitImage");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_imgbitscmds_bits_BitImage_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_new01_local
static int tolua_imgbitscmds_bits_BitImage_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  BitImage* tolua_ret = (BitImage*)  Mtolua_new(BitImage(w,h));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"BitImage");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_imgbitscmds_bits_BitImage_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_delete00
static int tolua_imgbitscmds_bits_BitImage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: clear of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_clear00
static int tolua_imgbitscmds_bits_BitImage_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: copy of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_copy00
static int tolua_imgbitscmds_bits_BitImage_copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
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

/* method: rank of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_rank00
static int tolua_imgbitscmds_bits_BitImage_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rank'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->rank();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rank'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dim of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_dim00
static int tolua_imgbitscmds_bits_BitImage_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dim'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->dim(i);
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

/* method: resize of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_resize00
static int tolua_imgbitscmds_bits_BitImage_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(w,h);
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

/* method: get_line of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_get_line00
static int tolua_imgbitscmds_bits_BitImage_get_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_line'",NULL);
#endif
 try {
 {
  word32* tolua_ret = (word32*)  self->get_line(i);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"word32");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_at00
static int tolua_imgbitscmds_bits_BitImage_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->at(i,j);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'at'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_bit of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_set_bit00
static int tolua_imgbitscmds_bits_BitImage_set_bit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_bit'",NULL);
#endif
 try {
 {
  self->set_bit(i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_bit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear_bit of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_clear_bit00
static int tolua_imgbitscmds_bits_BitImage_clear_bit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear_bit'",NULL);
#endif
 try {
 {
  self->clear_bit(i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear_bit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_set00
static int tolua_imgbitscmds_bits_BitImage_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
  bool value = ((bool)  tolua_toboolean(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 try {
 {
  self->set(i,j,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fill of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_fill00
static int tolua_imgbitscmds_bits_BitImage_fill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fill'",NULL);
#endif
 try {
 {
  self->fill(value);
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

/* method: megabytes of class  BitImage */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_BitImage_megabytes00
static int tolua_imgbitscmds_bits_BitImage_megabytes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* self = (BitImage*)  tolua_tousertype(tolua_S,1,0);
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

/* function: bits_move */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_move00
static int tolua_imgbitscmds_bits_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* dest = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* src = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_move(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_convert */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_convert00
static int tolua_imgbitscmds_bits_convert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* bimage = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_convert(*bimage,*image);
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

/* function: bits_convert */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_convert01
static int tolua_imgbitscmds_bits_convert01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  BitImage* bimage = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_convert(*bimage,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgbitscmds_bits_convert00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_convert */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_convert02
static int tolua_imgbitscmds_bits_convert02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  BitImage* bimage = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_convert(*image,*bimage);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgbitscmds_bits_convert01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_convert */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_convert03
static int tolua_imgbitscmds_bits_convert03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* image = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  BitImage* bimage = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_convert(*image,*bimage);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgbitscmds_bits_convert02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_count_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_count_rect00
static int tolua_imgbitscmds_bits_count_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
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
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,32000));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,32000));
 try {
 {
  int tolua_ret = (int)  bits_count_rect(*image,x0,y0,x1,y1);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'count_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_set_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_set_rect00
static int tolua_imgbitscmds_bits_set_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,32000));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,32000));
  bool value = ((bool)  tolua_toboolean(tolua_S,6,false));
 try {
 {
  bits_set_rect(*image,x0,y0,x1,y1,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_resample_normed */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_resample_normed00
static int tolua_imgbitscmds_bits_resample_normed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  BitImage* bits = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int vis_scale = ((int)  tolua_tonumber(tolua_S,3,0));
  bool norm = ((bool)  tolua_toboolean(tolua_S,4,true));
 try {
 {
  bits_resample_normed(*image,*bits,vis_scale,norm);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resample_normed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_resample */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_resample00
static int tolua_imgbitscmds_bits_resample00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  BitImage* bits = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int vis_scale = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_resample(*image,*bits,vis_scale);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resample'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_reduce2_and */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_reduce2_and00
static int tolua_imgbitscmds_bits_reduce2_and00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* out = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_reduce2_and(*out,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reduce2_and'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_transpose */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_transpose00
static int tolua_imgbitscmds_bits_transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* out = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* in = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_transpose(*out,*in);
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

/* function: bits_transpose */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_transpose01
static int tolua_imgbitscmds_bits_transpose01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bits_transpose(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgbitscmds_bits_transpose00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_flip_v */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_flip_v00
static int tolua_imgbitscmds_bits_flip_v00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bits_flip_v(*image);
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

/* function: bits_flip_h */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_flip_h00
static int tolua_imgbitscmds_bits_flip_h00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bits_flip_h(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'flip_h'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_rotate_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_rotate_rect00
static int tolua_imgbitscmds_bits_rotate_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int angle = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_rotate_rect(*image,angle);
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

/* function: bits_set */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_set00
static int tolua_imgbitscmds_bits_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_set(*image,*other,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_setnot */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_setnot00
static int tolua_imgbitscmds_bits_setnot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_setnot(*image,*other,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setnot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_and */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_And00
static int tolua_imgbitscmds_bits_And00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_and(*image,*other,dx,dy);
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

/* function: bits_or */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_Or00
static int tolua_imgbitscmds_bits_Or00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_or(*image,*other,dx,dy);
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

/* function: bits_andnot */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_andnot00
static int tolua_imgbitscmds_bits_andnot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_andnot(*image,*other,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'andnot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_ornot */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_ornot00
static int tolua_imgbitscmds_bits_ornot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_ornot(*image,*other,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ornot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_xor */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_xor00
static int tolua_imgbitscmds_bits_xor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* other = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int dx = ((int)  tolua_tonumber(tolua_S,3,0));
  int dy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_xor(*image,*other,dx,dy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_invert */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_invert00
static int tolua_imgbitscmds_bits_invert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bits_invert(*image);
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

/* function: bits_skew */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_skew00
static int tolua_imgbitscmds_bits_skew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  float skew = ((float)  tolua_tonumber(tolua_S,2,0));
  float center = ((float)  tolua_tonumber(tolua_S,3,0.0));
  bool backwards = ((bool)  tolua_toboolean(tolua_S,4,false));
 try {
 {
  bits_skew(*image,skew,center,backwards);
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

/* function: bits_rotate */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_rotate00
static int tolua_imgbitscmds_bits_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  float angle = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_rotate(*image,angle);
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

/* function: bits_erode_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_rect00
static int tolua_imgbitscmds_bits_erode_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_erode_rect(*image,rx,ry);
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

/* function: bits_dilate_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_rect00
static int tolua_imgbitscmds_bits_dilate_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_dilate_rect(*image,rx,ry);
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

/* function: bits_open_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_rect00
static int tolua_imgbitscmds_bits_open_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_open_rect(*image,rx,ry);
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

/* function: bits_close_rect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_rect00
static int tolua_imgbitscmds_bits_close_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_close_rect(*image,rx,ry);
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

/* function: bits_erode_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_mask00
static int tolua_imgbitscmds_bits_erode_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
 try {
 {
  bits_erode_mask(*image,*element,cx,cy);
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

/* function: bits_dilate_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_mask00
static int tolua_imgbitscmds_bits_dilate_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
 try {
 {
  bits_dilate_mask(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_open_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_mask00
static int tolua_imgbitscmds_bits_open_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
 try {
 {
  bits_open_mask(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_close_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_mask00
static int tolua_imgbitscmds_bits_close_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
 try {
 {
  bits_close_mask(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_mask_hitmiss */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_mask_hitmiss00
static int tolua_imgbitscmds_bits_mask_hitmiss00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
 try {
 {
  bits_mask_hitmiss(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mask_hitmiss'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_mask_hitmiss */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_mask_hitmiss01
static int tolua_imgbitscmds_bits_mask_hitmiss01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* hit = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  BitImage* miss = ((BitImage*)  tolua_tousertype(tolua_S,3,0));
  int cx = ((int)  tolua_tonumber(tolua_S,4,DFLTC));
  int cy = ((int)  tolua_tonumber(tolua_S,5,DFLTC));
 try {
 {
  bits_mask_hitmiss(*image,*hit,*miss,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_imgbitscmds_bits_mask_hitmiss00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_circ_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_circ_mask00
static int tolua_imgbitscmds_bits_circ_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_circ_mask(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'circ_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_circ */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_circ00
static int tolua_imgbitscmds_bits_erode_circ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_erode_circ(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_circ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_circ */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_circ00
static int tolua_imgbitscmds_bits_dilate_circ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_dilate_circ(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_circ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_open_circ */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_circ00
static int tolua_imgbitscmds_bits_open_circ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_open_circ(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_circ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_close_circ */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_circ00
static int tolua_imgbitscmds_bits_close_circ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_close_circ(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_circ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_rrect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_rrect00
static int tolua_imgbitscmds_bits_erode_rrect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  double angle = ((double)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_erode_rrect(*image,w,h,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_rrect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_rrect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_rrect00
static int tolua_imgbitscmds_bits_dilate_rrect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  double angle = ((double)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_dilate_rrect(*image,w,h,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_rrect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_open_rrect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_rrect00
static int tolua_imgbitscmds_bits_open_rrect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  double angle = ((double)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_open_rrect(*image,w,h,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_rrect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_close_rrect */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_rrect00
static int tolua_imgbitscmds_bits_close_rrect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  double angle = ((double)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_close_rrect(*image,w,h,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_rrect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_line */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_line00
static int tolua_imgbitscmds_bits_erode_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  int rp = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_erode_line(*image,r,angle,rp);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_line */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_line00
static int tolua_imgbitscmds_bits_dilate_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  int rp = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_dilate_line(*image,r,angle,rp);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_open_line */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_line00
static int tolua_imgbitscmds_bits_open_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  int rp = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_open_line(*image,r,angle,rp);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_close_line */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_line00
static int tolua_imgbitscmds_bits_close_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
  int rp = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_close_line(*image,r,angle,rp);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_rect_bruteforce */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_rect_bruteforce00
static int tolua_imgbitscmds_bits_erode_rect_bruteforce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_erode_rect_bruteforce(*image,rx,ry);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_rect_bruteforce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_rect_bruteforce */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_rect_bruteforce00
static int tolua_imgbitscmds_bits_dilate_rect_bruteforce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int rx = ((int)  tolua_tonumber(tolua_S,2,0));
  int ry = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_dilate_rect_bruteforce(*image,rx,ry);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_rect_bruteforce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_mask_bruteforce */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_mask_bruteforce00
static int tolua_imgbitscmds_bits_erode_mask_bruteforce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_erode_mask_bruteforce(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_mask_bruteforce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_mask_bruteforce */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_mask_bruteforce00
static int tolua_imgbitscmds_bits_dilate_mask_bruteforce00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* element = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  int cx = ((int)  tolua_tonumber(tolua_S,3,0));
  int cy = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bits_dilate_mask_bruteforce(*image,*element,cx,cy);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_mask_bruteforce'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_circ_by_dt */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_circ_by_dt00
static int tolua_imgbitscmds_bits_erode_circ_by_dt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_erode_circ_by_dt(*image,r);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_circ_by_dt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_erode_line_by_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_erode_line_by_mask00
static int tolua_imgbitscmds_bits_erode_line_by_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_erode_line_by_mask(*image,r,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'erode_line_by_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_dilate_line_by_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dilate_line_by_mask00
static int tolua_imgbitscmds_bits_dilate_line_by_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_dilate_line_by_mask(*image,r,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dilate_line_by_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_open_line_by_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_open_line_by_mask00
static int tolua_imgbitscmds_bits_open_line_by_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_open_line_by_mask(*image,r,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'open_line_by_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_close_line_by_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_close_line_by_mask00
static int tolua_imgbitscmds_bits_close_line_by_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  double angle = ((double)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bits_close_line_by_mask(*image,r,angle);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'close_line_by_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_runlength_statistics */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_runlength_statistics00
static int tolua_imgbitscmds_bits_runlength_statistics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* on = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* off = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  bits_runlength_statistics(*on,*off,*image);
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

/* function: bits_read */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_read00
static int tolua_imgbitscmds_bits_read00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  bits_read(*image,file);
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

/* function: bits_write */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_write00
static int tolua_imgbitscmds_bits_write00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bits_write(file,*image);
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

/* function: bits_dshow */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_dshow00
static int tolua_imgbitscmds_bits_dshow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,""));
 try {
 {
  bits_dshow(*image,spec);
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

/* function: bits_thin */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_thin00
static int tolua_imgbitscmds_bits_thin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* image = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  int neighborhood = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bits_thin(*image,neighborhood);
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

/* function: bits_parse_mask */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_parse_mask00
static int tolua_imgbitscmds_bits_parse_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* hit = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  const char* mask = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  bits_parse_mask(*hit,mask);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_parse_hitmiss */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_parse_hitmiss00
static int tolua_imgbitscmds_bits_parse_hitmiss00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"BitImage",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"BitImage",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  BitImage* hit = ((BitImage*)  tolua_tousertype(tolua_S,1,0));
  BitImage* miss = ((BitImage*)  tolua_tousertype(tolua_S,2,0));
  const char* mask = ((const char*)  tolua_tostring(tolua_S,3,0));
 try {
 {
  bits_parse_hitmiss(*hit,*miss,mask);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_hitmiss'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: use_telescope */
#ifndef TOLUA_DISABLE_tolua_get_bits_use_telescope
static int tolua_get_bits_use_telescope(lua_State* tolua_S)
{
 tolua_pushnumber(tolua_S,(lua_Number)use_telescope);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: use_telescope */
#ifndef TOLUA_DISABLE_tolua_set_bits_use_telescope
static int tolua_set_bits_use_telescope(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  use_telescope = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: bits_change_blit */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_change_blit00
static int tolua_imgbitscmds_bits_change_blit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  int tolua_var_1 = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  bits_change_blit(tolua_var_1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'change_blit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: get_blit_count */
#ifndef TOLUA_DISABLE_tolua_imgbitscmds_bits_get_blit_count00
static int tolua_imgbitscmds_bits_get_blit_count00(lua_State* tolua_S)
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
  int tolua_ret = (int)  get_blit_count();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_blit_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_imgbitscmds_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_module(tolua_S,"bits",1);
 tolua_beginmodule(tolua_S,"bits");
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"BitImage","BitImage","",tolua_collect_BitImage);
  #else
  tolua_cclass(tolua_S,"BitImage","BitImage","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"BitImage");
   tolua_function(tolua_S,"new",tolua_imgbitscmds_bits_BitImage_new00);
   tolua_function(tolua_S,"new_local",tolua_imgbitscmds_bits_BitImage_new00_local);
   tolua_function(tolua_S,".call",tolua_imgbitscmds_bits_BitImage_new00_local);
   tolua_function(tolua_S,"new",tolua_imgbitscmds_bits_BitImage_new01);
   tolua_function(tolua_S,"new_local",tolua_imgbitscmds_bits_BitImage_new01_local);
   tolua_function(tolua_S,".call",tolua_imgbitscmds_bits_BitImage_new01_local);
   tolua_function(tolua_S,"delete",tolua_imgbitscmds_bits_BitImage_delete00);
   tolua_function(tolua_S,"clear",tolua_imgbitscmds_bits_BitImage_clear00);
   tolua_function(tolua_S,"copy",tolua_imgbitscmds_bits_BitImage_copy00);
   tolua_function(tolua_S,"rank",tolua_imgbitscmds_bits_BitImage_rank00);
   tolua_function(tolua_S,"dim",tolua_imgbitscmds_bits_BitImage_dim00);
   tolua_function(tolua_S,"resize",tolua_imgbitscmds_bits_BitImage_resize00);
   tolua_function(tolua_S,"get_line",tolua_imgbitscmds_bits_BitImage_get_line00);
   tolua_function(tolua_S,"at",tolua_imgbitscmds_bits_BitImage_at00);
   tolua_function(tolua_S,"set_bit",tolua_imgbitscmds_bits_BitImage_set_bit00);
   tolua_function(tolua_S,"clear_bit",tolua_imgbitscmds_bits_BitImage_clear_bit00);
   tolua_function(tolua_S,"set",tolua_imgbitscmds_bits_BitImage_set00);
   tolua_function(tolua_S,"fill",tolua_imgbitscmds_bits_BitImage_fill00);
   tolua_function(tolua_S,"megabytes",tolua_imgbitscmds_bits_BitImage_megabytes00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"move",tolua_imgbitscmds_bits_move00);
  tolua_function(tolua_S,"convert",tolua_imgbitscmds_bits_convert00);
  tolua_function(tolua_S,"convert",tolua_imgbitscmds_bits_convert01);
  tolua_function(tolua_S,"convert",tolua_imgbitscmds_bits_convert02);
  tolua_function(tolua_S,"convert",tolua_imgbitscmds_bits_convert03);
  tolua_function(tolua_S,"count_rect",tolua_imgbitscmds_bits_count_rect00);
  tolua_function(tolua_S,"set_rect",tolua_imgbitscmds_bits_set_rect00);
  tolua_function(tolua_S,"resample_normed",tolua_imgbitscmds_bits_resample_normed00);
  tolua_function(tolua_S,"resample",tolua_imgbitscmds_bits_resample00);
  tolua_function(tolua_S,"reduce2_and",tolua_imgbitscmds_bits_reduce2_and00);
  tolua_function(tolua_S,"transpose",tolua_imgbitscmds_bits_transpose00);
  tolua_function(tolua_S,"transpose",tolua_imgbitscmds_bits_transpose01);
  tolua_function(tolua_S,"flip_v",tolua_imgbitscmds_bits_flip_v00);
  tolua_function(tolua_S,"flip_h",tolua_imgbitscmds_bits_flip_h00);
  tolua_function(tolua_S,"rotate_rect",tolua_imgbitscmds_bits_rotate_rect00);
  tolua_function(tolua_S,"set",tolua_imgbitscmds_bits_set00);
  tolua_function(tolua_S,"setnot",tolua_imgbitscmds_bits_setnot00);
  tolua_function(tolua_S,"And",tolua_imgbitscmds_bits_And00);
  tolua_function(tolua_S,"Or",tolua_imgbitscmds_bits_Or00);
  tolua_function(tolua_S,"andnot",tolua_imgbitscmds_bits_andnot00);
  tolua_function(tolua_S,"ornot",tolua_imgbitscmds_bits_ornot00);
  tolua_function(tolua_S,"xor",tolua_imgbitscmds_bits_xor00);
  tolua_function(tolua_S,"invert",tolua_imgbitscmds_bits_invert00);
  tolua_function(tolua_S,"skew",tolua_imgbitscmds_bits_skew00);
  tolua_function(tolua_S,"rotate",tolua_imgbitscmds_bits_rotate00);
  tolua_function(tolua_S,"erode_rect",tolua_imgbitscmds_bits_erode_rect00);
  tolua_function(tolua_S,"dilate_rect",tolua_imgbitscmds_bits_dilate_rect00);
  tolua_function(tolua_S,"open_rect",tolua_imgbitscmds_bits_open_rect00);
  tolua_function(tolua_S,"close_rect",tolua_imgbitscmds_bits_close_rect00);
  tolua_function(tolua_S,"erode_mask",tolua_imgbitscmds_bits_erode_mask00);
  tolua_function(tolua_S,"dilate_mask",tolua_imgbitscmds_bits_dilate_mask00);
  tolua_function(tolua_S,"open_mask",tolua_imgbitscmds_bits_open_mask00);
  tolua_function(tolua_S,"close_mask",tolua_imgbitscmds_bits_close_mask00);
  tolua_function(tolua_S,"mask_hitmiss",tolua_imgbitscmds_bits_mask_hitmiss00);
  tolua_function(tolua_S,"mask_hitmiss",tolua_imgbitscmds_bits_mask_hitmiss01);
  tolua_function(tolua_S,"circ_mask",tolua_imgbitscmds_bits_circ_mask00);
  tolua_function(tolua_S,"erode_circ",tolua_imgbitscmds_bits_erode_circ00);
  tolua_function(tolua_S,"dilate_circ",tolua_imgbitscmds_bits_dilate_circ00);
  tolua_function(tolua_S,"open_circ",tolua_imgbitscmds_bits_open_circ00);
  tolua_function(tolua_S,"close_circ",tolua_imgbitscmds_bits_close_circ00);
  tolua_function(tolua_S,"erode_rrect",tolua_imgbitscmds_bits_erode_rrect00);
  tolua_function(tolua_S,"dilate_rrect",tolua_imgbitscmds_bits_dilate_rrect00);
  tolua_function(tolua_S,"open_rrect",tolua_imgbitscmds_bits_open_rrect00);
  tolua_function(tolua_S,"close_rrect",tolua_imgbitscmds_bits_close_rrect00);
  tolua_function(tolua_S,"erode_line",tolua_imgbitscmds_bits_erode_line00);
  tolua_function(tolua_S,"dilate_line",tolua_imgbitscmds_bits_dilate_line00);
  tolua_function(tolua_S,"open_line",tolua_imgbitscmds_bits_open_line00);
  tolua_function(tolua_S,"close_line",tolua_imgbitscmds_bits_close_line00);
  tolua_function(tolua_S,"erode_rect_bruteforce",tolua_imgbitscmds_bits_erode_rect_bruteforce00);
  tolua_function(tolua_S,"dilate_rect_bruteforce",tolua_imgbitscmds_bits_dilate_rect_bruteforce00);
  tolua_function(tolua_S,"erode_mask_bruteforce",tolua_imgbitscmds_bits_erode_mask_bruteforce00);
  tolua_function(tolua_S,"dilate_mask_bruteforce",tolua_imgbitscmds_bits_dilate_mask_bruteforce00);
  tolua_function(tolua_S,"erode_circ_by_dt",tolua_imgbitscmds_bits_erode_circ_by_dt00);
  tolua_function(tolua_S,"erode_line_by_mask",tolua_imgbitscmds_bits_erode_line_by_mask00);
  tolua_function(tolua_S,"dilate_line_by_mask",tolua_imgbitscmds_bits_dilate_line_by_mask00);
  tolua_function(tolua_S,"open_line_by_mask",tolua_imgbitscmds_bits_open_line_by_mask00);
  tolua_function(tolua_S,"close_line_by_mask",tolua_imgbitscmds_bits_close_line_by_mask00);
  tolua_function(tolua_S,"runlength_statistics",tolua_imgbitscmds_bits_runlength_statistics00);
  tolua_function(tolua_S,"read",tolua_imgbitscmds_bits_read00);
  tolua_function(tolua_S,"write",tolua_imgbitscmds_bits_write00);
  tolua_function(tolua_S,"dshow",tolua_imgbitscmds_bits_dshow00);
  tolua_function(tolua_S,"thin",tolua_imgbitscmds_bits_thin00);
  tolua_function(tolua_S,"parse_mask",tolua_imgbitscmds_bits_parse_mask00);
  tolua_function(tolua_S,"parse_hitmiss",tolua_imgbitscmds_bits_parse_hitmiss00);
  tolua_variable(tolua_S,"use_telescope",tolua_get_bits_use_telescope,tolua_set_bits_use_telescope);
  tolua_function(tolua_S,"change_blit",tolua_imgbitscmds_bits_change_blit00);
  tolua_function(tolua_S,"get_blit_count",tolua_imgbitscmds_bits_get_blit_count00);
 tolua_endmodule(tolua_S);

 { /* begin embedded lua code */
  int top = lua_gettop(tolua_S);
  static unsigned char B[] = {
  10, 66,105,116, 73,109, 97,103,101, 32, 61, 32, 98,105,116,
  115, 46, 66,105,116, 73,109, 97,103,101, 10,102,117,110, 99,
  116,105,111,110, 32, 98,105,116,115, 46,114,101, 97,100,110,
  101,119, 40,102,105,108,101, 41, 32,108,111, 99, 97,108, 32,
   98,105, 61, 66,105,116, 73,109, 97,103,101, 58,110,101,119,
   40, 41, 59, 32, 98,105,116,115, 46,114,101, 97,100, 40, 98,
  105, 44,102,105,108,101, 41, 59, 32,114,101,116,117,114,110,
   32, 98,105, 32,101,110,100,32
  };
  tolua_dobuffer(tolua_S,(char*)B,sizeof(B),"tolua: embedded Lua code 1");
  lua_settop(tolua_S, top);
 } /* end of embedded lua code */

 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_imgbitscmds (lua_State* tolua_S) {
 return tolua_imgbitscmds_open(tolua_S);
};
#endif

