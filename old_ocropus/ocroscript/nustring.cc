/*
** Lua binding: nustring
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:38 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_nustring_open (lua_State* tolua_S);

#include "colib.h"
using namespace colib;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_nuchar (lua_State* tolua_S)
{
 nuchar* self = (nuchar*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_nustring (lua_State* tolua_S)
{
 nustring* self = (nustring*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"nuchar");
 tolua_usertype(tolua_S,"nustring");
}

/* method: new of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new00
static int tolua_nustring_nuchar_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nuchar");
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

/* method: new_local of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new00_local
static int tolua_nustring_nuchar_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nuchar");
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

/* method: new of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new01
static int tolua_nustring_nuchar_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const nuchar",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const nuchar* c = ((const nuchar*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar(*c));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nuchar_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new01_local
static int tolua_nustring_nuchar_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const nuchar",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const nuchar* c = ((const nuchar*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar(*c));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nuchar");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nuchar_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new02
static int tolua_nustring_nuchar_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar(x));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nuchar_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_new02_local
static int tolua_nustring_nuchar_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nuchar",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  nuchar* tolua_ret = (nuchar*)  Mtolua_new(nuchar(x));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nuchar");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nuchar_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ord of class  nuchar */
#ifndef TOLUA_DISABLE_tolua_nustring_nuchar_ord00
static int tolua_nustring_nuchar_ord00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nuchar",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nuchar* self = (nuchar*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ord'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->ord();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ord'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new00
static int tolua_nustring_nustring_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nustring");
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

/* method: new_local of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new00_local
static int tolua_nustring_nustring_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nustring");
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

/* method: new of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new01
static int tolua_nustring_nustring_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring(d0));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nustring");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nustring_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new01_local
static int tolua_nustring_nustring_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring(d0));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nustring");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nustring_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new02
static int tolua_nustring_nustring_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* tolua_var_1 = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring(tolua_var_1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"nustring");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nustring_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_new02_local
static int tolua_nustring_nustring_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* tolua_var_1 = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  nustring* tolua_ret = (nustring*)  Mtolua_new(nustring(tolua_var_1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"nustring");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nustring_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_delete00
static int tolua_nustring_nustring_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dealloc of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_dealloc00
static int tolua_nustring_nustring_dealloc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dealloc'",NULL);
#endif
 try {
 {
  self->dealloc();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dealloc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resize of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_resize00
static int tolua_nustring_nustring_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0);
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

/* method: renew of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_renew00
static int tolua_nustring_nustring_renew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renew'",NULL);
#endif
 try {
 {
  self->renew(d0);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'renew'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reshape of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_reshape00
static int tolua_nustring_nustring_reshape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reshape'",NULL);
#endif
 try {
 {
  self->reshape(d0);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reshape'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_length00
static int tolua_nustring_nustring_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->length();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rank of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_rank00
static int tolua_nustring_nustring_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const nustring* self = (const nustring*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_dim00
static int tolua_nustring_nustring_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const nustring* self = (const nustring*)  tolua_tousertype(tolua_S,1,0);
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

/* method: at of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_at00
static int tolua_nustring_nustring_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  nuchar& tolua_ret = (nuchar&)  self->at(i0);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"nuchar");
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

/* method: at1d of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_at1d00
static int tolua_nustring_nustring_at1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const nustring* self = (const nustring*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at1d'",NULL);
#endif
 try {
 {
  nuchar& tolua_ret = (nuchar&)  self->at1d(i);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'at1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reserve of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_reserve00
static int tolua_nustring_nustring_reserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reserve'",NULL);
#endif
 try {
 {
  self->reserve(n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reserve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: grow_to of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_grow_to00
static int tolua_nustring_nustring_grow_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'grow_to'",NULL);
#endif
 try {
 {
  self->grow_to(n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'grow_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_push00
static int tolua_nustring_nustring_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const nuchar",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  const nuchar* value = ((const nuchar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(*value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_push01
static int tolua_nustring_nustring_push01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nuchar",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  nuchar* value = ((nuchar*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(*value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_nustring_nustring_push00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_push02
static int tolua_nustring_nustring_push02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  nuchar& tolua_ret = (nuchar&)  self->push();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_nustring_nustring_push01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: pop of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_pop00
static int tolua_nustring_nustring_pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pop'",NULL);
#endif
 try {
 {
  nuchar& tolua_ret = (nuchar&)  self->pop();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: last of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_last00
static int tolua_nustring_nustring_last00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'last'",NULL);
#endif
 try {
 {
  nuchar& tolua_ret = (nuchar&)  self->last();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"nuchar");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'last'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_clear00
static int tolua_nustring_nustring_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
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

/* method: utf8Length of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_utf8Length00
static int tolua_nustring_nustring_utf8Length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'utf8Length'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->utf8Length();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'utf8Length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: utf8Decode of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_decode00
static int tolua_nustring_nustring_decode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
  int size = ((int)  tolua_tonumber(tolua_S,3,-1));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'utf8Decode'",NULL);
#endif
 try {
 {
  self->utf8Decode(s,size);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'decode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mallocUtf8Encode of class  nustring */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_utf800
static int tolua_nustring_nustring_utf800(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* self = (nustring*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mallocUtf8Encode'",NULL);
#endif
 try {
 {
  char* tolua_ret = (char*)  self->mallocUtf8Encode();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'utf8'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: move */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_move00
static int tolua_nustring_nustring_move00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* dest = ((nustring*)  tolua_tousertype(tolua_S,1,0));
  nustring* src = ((nustring*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  move(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nustring_move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_copy00
static int tolua_nustring_nustring_copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* dest = ((nustring*)  tolua_tousertype(tolua_S,1,0));
  nustring* src = ((nustring*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nustring_copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: equal */
#ifndef TOLUA_DISABLE_tolua_nustring_nustring_equal00
static int tolua_nustring_nustring_equal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  nustring* a = ((nustring*)  tolua_tousertype(tolua_S,1,0));
  nustring* b = ((nustring*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  equal(*a,*b);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nustring_equal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_nustring_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"nuchar","nuchar","",tolua_collect_nuchar);
 #else
 tolua_cclass(tolua_S,"nuchar","nuchar","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"nuchar");
  tolua_function(tolua_S,"new",tolua_nustring_nuchar_new00);
  tolua_function(tolua_S,"new_local",tolua_nustring_nuchar_new00_local);
  tolua_function(tolua_S,".call",tolua_nustring_nuchar_new00_local);
  tolua_function(tolua_S,"new",tolua_nustring_nuchar_new01);
  tolua_function(tolua_S,"new_local",tolua_nustring_nuchar_new01_local);
  tolua_function(tolua_S,".call",tolua_nustring_nuchar_new01_local);
  tolua_function(tolua_S,"new",tolua_nustring_nuchar_new02);
  tolua_function(tolua_S,"new_local",tolua_nustring_nuchar_new02_local);
  tolua_function(tolua_S,".call",tolua_nustring_nuchar_new02_local);
  tolua_function(tolua_S,"ord",tolua_nustring_nuchar_ord00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"nustring","nustring","",tolua_collect_nustring);
 #else
 tolua_cclass(tolua_S,"nustring","nustring","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"nustring");
  tolua_function(tolua_S,"new",tolua_nustring_nustring_new00);
  tolua_function(tolua_S,"new_local",tolua_nustring_nustring_new00_local);
  tolua_function(tolua_S,".call",tolua_nustring_nustring_new00_local);
  tolua_function(tolua_S,"new",tolua_nustring_nustring_new01);
  tolua_function(tolua_S,"new_local",tolua_nustring_nustring_new01_local);
  tolua_function(tolua_S,".call",tolua_nustring_nustring_new01_local);
  tolua_function(tolua_S,"new",tolua_nustring_nustring_new02);
  tolua_function(tolua_S,"new_local",tolua_nustring_nustring_new02_local);
  tolua_function(tolua_S,".call",tolua_nustring_nustring_new02_local);
  tolua_function(tolua_S,"delete",tolua_nustring_nustring_delete00);
  tolua_function(tolua_S,"dealloc",tolua_nustring_nustring_dealloc00);
  tolua_function(tolua_S,"resize",tolua_nustring_nustring_resize00);
  tolua_function(tolua_S,"renew",tolua_nustring_nustring_renew00);
  tolua_function(tolua_S,"reshape",tolua_nustring_nustring_reshape00);
  tolua_function(tolua_S,"length",tolua_nustring_nustring_length00);
  tolua_function(tolua_S,"rank",tolua_nustring_nustring_rank00);
  tolua_function(tolua_S,"dim",tolua_nustring_nustring_dim00);
  tolua_function(tolua_S,"at",tolua_nustring_nustring_at00);
  tolua_function(tolua_S,"at1d",tolua_nustring_nustring_at1d00);
  tolua_function(tolua_S,"reserve",tolua_nustring_nustring_reserve00);
  tolua_function(tolua_S,"grow_to",tolua_nustring_nustring_grow_to00);
  tolua_function(tolua_S,"push",tolua_nustring_nustring_push00);
  tolua_function(tolua_S,"push",tolua_nustring_nustring_push01);
  tolua_function(tolua_S,"push",tolua_nustring_nustring_push02);
  tolua_function(tolua_S,"pop",tolua_nustring_nustring_pop00);
  tolua_function(tolua_S,"last",tolua_nustring_nustring_last00);
  tolua_function(tolua_S,"clear",tolua_nustring_nustring_clear00);
  tolua_function(tolua_S,"utf8Length",tolua_nustring_nustring_utf8Length00);
  tolua_function(tolua_S,"decode",tolua_nustring_nustring_decode00);
  tolua_function(tolua_S,"utf8",tolua_nustring_nustring_utf800);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"nustring_move",tolua_nustring_nustring_move00);
 tolua_function(tolua_S,"nustring_copy",tolua_nustring_nustring_copy00);
 tolua_function(tolua_S,"nustring_equal",tolua_nustring_nustring_equal00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_nustring (lua_State* tolua_S) {
 return tolua_nustring_open(tolua_S);
};
#endif

