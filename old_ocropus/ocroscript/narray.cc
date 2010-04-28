/*
** Lua binding: narray
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:30 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_narray_open (lua_State* tolua_S);

#undef UNSAFE
#include <math.h>
#include "colib.h"
using namespace colib;
 template<class T,class S>
 void put(narray<T> *a,int i,S value) { a->at(i) = value; }
 template<class T,class S>
 void put(narray<T> *a,int i,int j,S value) { a->at(i,j) = value; }
 template<class T,class S>
 void put(narray<T> *a,int i,int j,int k,S value) { a->at(i,j,k) = value; }
 template<class T,class S>
 void put(narray<T> *a,int i,int j,int k,int l,S value) { a->at(i,j,k,l) = value; }
typedef narray<rectangle> rectanglearray;
using namespace narray_ops;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_rectangle (lua_State* tolua_S)
{
 rectangle* self = (rectangle*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_rectanglearray (lua_State* tolua_S)
{
 rectanglearray* self = (rectanglearray*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_bytearray (lua_State* tolua_S)
{
 bytearray* self = (bytearray*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_intarray (lua_State* tolua_S)
{
 intarray* self = (intarray*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_floatarray (lua_State* tolua_S)
{
 floatarray* self = (floatarray*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"rectangle");
 tolua_usertype(tolua_S,"rectanglearray");
 tolua_usertype(tolua_S,"bytearray");
 tolua_usertype(tolua_S,"intarray");
 tolua_usertype(tolua_S,"floatarray");
}

/* method: new of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new00
static int tolua_narray_floatarray_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"floatarray");
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

/* method: new_local of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new00_local
static int tolua_narray_floatarray_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"floatarray");
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

/* method: new of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new01
static int tolua_narray_floatarray_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"floatarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new01_local
static int tolua_narray_floatarray_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"floatarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new02
static int tolua_narray_floatarray_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"floatarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new02_local
static int tolua_narray_floatarray_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"floatarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new03
static int tolua_narray_floatarray_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"floatarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new03_local
static int tolua_narray_floatarray_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"floatarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new04
static int tolua_narray_floatarray_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"floatarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_new04_local
static int tolua_narray_floatarray_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  floatarray* tolua_ret = (floatarray*)  Mtolua_new(floatarray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"floatarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_delete00
static int tolua_narray_floatarray_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dealloc of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_dealloc00
static int tolua_narray_floatarray_dealloc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: resize of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_resize00
static int tolua_narray_floatarray_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0,d1,d2,d3);
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

/* method: renew of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_renew00
static int tolua_narray_floatarray_renew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renew'",NULL);
#endif
 try {
 {
  self->renew(d0,d1,d2,d3);
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

/* method: reshape of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_reshape00
static int tolua_narray_floatarray_reshape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reshape'",NULL);
#endif
 try {
 {
  self->reshape(d0,d1,d2,d3);
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

/* method: rank of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_rank00
static int tolua_narray_floatarray_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const floatarray* self = (const floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_dim00
static int tolua_narray_floatarray_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const floatarray* self = (const floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: at of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_at00
static int tolua_narray_floatarray_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->at(i0);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: at of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_at01
static int tolua_narray_floatarray_at01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->at(i0,i1);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_at00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_at02
static int tolua_narray_floatarray_at02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->at(i0,i1,i2);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_at01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_at03
static int tolua_narray_floatarray_at03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int i3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->at(i0,i1,i2,i3);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_at02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length1d of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_length1d00
static int tolua_narray_floatarray_length1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const floatarray* self = (const floatarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length1d'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->length1d();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: at1d of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_at1d00
static int tolua_narray_floatarray_at1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const floatarray* self = (const floatarray*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at1d'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->at1d(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: reserve of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_reserve00
static int tolua_narray_floatarray_reserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: grow_to of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_grow_to00
static int tolua_narray_floatarray_grow_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: length of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_length00
static int tolua_narray_floatarray_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: push of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_push00
static int tolua_narray_floatarray_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  const float value = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(value);
 tolua_pushnumber(tolua_S,(lua_Number)value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_push01
static int tolua_narray_floatarray_push01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  float value = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(value);
 tolua_pushnumber(tolua_S,(lua_Number)value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_floatarray_push00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: pop of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_pop00
static int tolua_narray_floatarray_pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pop'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->pop();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: last of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_last00
static int tolua_narray_floatarray_last00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'last'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->last();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: clear of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_clear00
static int tolua_narray_floatarray_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: put of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_put00
static int tolua_narray_floatarray_put00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_1 = ((int)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_2 = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_1,tolua_var_2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'put'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_put01
static int tolua_narray_floatarray_put01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_3 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_4 = ((int)  tolua_tonumber(tolua_S,3,0));
  float tolua_var_5 = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_3,tolua_var_4,tolua_var_5);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_floatarray_put00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_put02
static int tolua_narray_floatarray_put02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_6 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_7 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_8 = ((int)  tolua_tonumber(tolua_S,4,0));
  float tolua_var_9 = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_6,tolua_var_7,tolua_var_8,tolua_var_9);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_floatarray_put01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  floatarray */
#ifndef TOLUA_DISABLE_tolua_narray_floatarray_put03
static int tolua_narray_floatarray_put03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* self = (floatarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_10 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_11 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_12 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_13 = ((int)  tolua_tonumber(tolua_S,5,0));
  float tolua_var_14 = ((float)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_10,tolua_var_11,tolua_var_12,tolua_var_13,tolua_var_14);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_floatarray_put02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new00
static int tolua_narray_intarray_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
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

/* method: new_local of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new00_local
static int tolua_narray_intarray_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"intarray");
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

/* method: new of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new01
static int tolua_narray_intarray_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new01_local
static int tolua_narray_intarray_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"intarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new02
static int tolua_narray_intarray_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new02_local
static int tolua_narray_intarray_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"intarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new03
static int tolua_narray_intarray_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new03_local
static int tolua_narray_intarray_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"intarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new04
static int tolua_narray_intarray_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_new04_local
static int tolua_narray_intarray_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  Mtolua_new(intarray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"intarray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_delete00
static int tolua_narray_intarray_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dealloc of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_dealloc00
static int tolua_narray_intarray_dealloc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: resize of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_resize00
static int tolua_narray_intarray_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0,d1,d2,d3);
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

/* method: renew of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_renew00
static int tolua_narray_intarray_renew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renew'",NULL);
#endif
 try {
 {
  self->renew(d0,d1,d2,d3);
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

/* method: reshape of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_reshape00
static int tolua_narray_intarray_reshape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reshape'",NULL);
#endif
 try {
 {
  self->reshape(d0,d1,d2,d3);
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

/* method: rank of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_rank00
static int tolua_narray_intarray_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const intarray* self = (const intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_dim00
static int tolua_narray_intarray_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const intarray* self = (const intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: at of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_at00
static int tolua_narray_intarray_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->at(i0);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: at of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_at01
static int tolua_narray_intarray_at01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->at(i0,i1);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_at00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_at02
static int tolua_narray_intarray_at02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->at(i0,i1,i2);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_at01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_at03
static int tolua_narray_intarray_at03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int i3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->at(i0,i1,i2,i3);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_at02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length1d of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_length1d00
static int tolua_narray_intarray_length1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const intarray* self = (const intarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length1d'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->length1d();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: at1d of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_at1d00
static int tolua_narray_intarray_at1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const intarray* self = (const intarray*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at1d'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->at1d(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: reserve of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_reserve00
static int tolua_narray_intarray_reserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: grow_to of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_grow_to00
static int tolua_narray_intarray_grow_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: length of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_length00
static int tolua_narray_intarray_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: push of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_push00
static int tolua_narray_intarray_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  const int value = ((const int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(value);
 tolua_pushnumber(tolua_S,(lua_Number)value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_push01
static int tolua_narray_intarray_push01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(value);
 tolua_pushnumber(tolua_S,(lua_Number)value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_intarray_push00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: pop of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_pop00
static int tolua_narray_intarray_pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pop'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->pop();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: last of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_last00
static int tolua_narray_intarray_last00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'last'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->last();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: clear of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_clear00
static int tolua_narray_intarray_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: put of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_put00
static int tolua_narray_intarray_put00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_15 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_16 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_15,tolua_var_16);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'put'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_put01
static int tolua_narray_intarray_put01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_17 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_18 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_19 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_17,tolua_var_18,tolua_var_19);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_intarray_put00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_put02
static int tolua_narray_intarray_put02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_20 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_21 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_22 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_23 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_20,tolua_var_21,tolua_var_22,tolua_var_23);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_intarray_put01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  intarray */
#ifndef TOLUA_DISABLE_tolua_narray_intarray_put03
static int tolua_narray_intarray_put03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* self = (intarray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_24 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_25 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_26 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_27 = ((int)  tolua_tonumber(tolua_S,5,0));
  int tolua_var_28 = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_24,tolua_var_25,tolua_var_26,tolua_var_27,tolua_var_28);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_intarray_put02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new00
static int tolua_narray_bytearray_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"bytearray");
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

/* method: new_local of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new00_local
static int tolua_narray_bytearray_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"bytearray");
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

/* method: new of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new01
static int tolua_narray_bytearray_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"bytearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new01_local
static int tolua_narray_bytearray_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"bytearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new02
static int tolua_narray_bytearray_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"bytearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new02_local
static int tolua_narray_bytearray_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"bytearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new03
static int tolua_narray_bytearray_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"bytearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new03_local
static int tolua_narray_bytearray_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"bytearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new04
static int tolua_narray_bytearray_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"bytearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_new04_local
static int tolua_narray_bytearray_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  bytearray* tolua_ret = (bytearray*)  Mtolua_new(bytearray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"bytearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_delete00
static int tolua_narray_bytearray_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dealloc of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_dealloc00
static int tolua_narray_bytearray_dealloc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: resize of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_resize00
static int tolua_narray_bytearray_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0,d1,d2,d3);
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

/* method: renew of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_renew00
static int tolua_narray_bytearray_renew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renew'",NULL);
#endif
 try {
 {
  self->renew(d0,d1,d2,d3);
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

/* method: reshape of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_reshape00
static int tolua_narray_bytearray_reshape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reshape'",NULL);
#endif
 try {
 {
  self->reshape(d0,d1,d2,d3);
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

/* method: rank of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_rank00
static int tolua_narray_bytearray_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const bytearray* self = (const bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_dim00
static int tolua_narray_bytearray_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const bytearray* self = (const bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: at of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_at00
static int tolua_narray_bytearray_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->at(i0);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: at of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_at01
static int tolua_narray_bytearray_at01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->at(i0,i1);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_at00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_at02
static int tolua_narray_bytearray_at02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->at(i0,i1,i2);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_at01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_at03
static int tolua_narray_bytearray_at03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int i3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->at(i0,i1,i2,i3);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_bytearray_at02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length1d of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_length1d00
static int tolua_narray_bytearray_length1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const bytearray* self = (const bytearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length1d'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->length1d();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: at1d of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_at1d00
static int tolua_narray_bytearray_at1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const bytearray* self = (const bytearray*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at1d'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->at1d(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: reserve of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_reserve00
static int tolua_narray_bytearray_reserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: grow_to of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_grow_to00
static int tolua_narray_bytearray_grow_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: length of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_length00
static int tolua_narray_bytearray_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: push of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_push00
static int tolua_narray_bytearray_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  self->push(value);
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

/* method: pop of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_pop00
static int tolua_narray_bytearray_pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pop'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->pop();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: last of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_last00
static int tolua_narray_bytearray_last00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'last'",NULL);
#endif
 try {
 {
  unsigned char tolua_ret = ( unsigned char)  self->last();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
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

/* method: clear of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_clear00
static int tolua_narray_bytearray_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: put of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_put00
static int tolua_narray_bytearray_put00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_29 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_30 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_29,tolua_var_30);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'put'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_put01
static int tolua_narray_bytearray_put01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_31 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_32 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_33 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_31,tolua_var_32,tolua_var_33);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_bytearray_put00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_put02
static int tolua_narray_bytearray_put02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_34 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_35 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_36 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_37 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_34,tolua_var_35,tolua_var_36,tolua_var_37);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_bytearray_put01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: put of class  bytearray */
#ifndef TOLUA_DISABLE_tolua_narray_bytearray_put03
static int tolua_narray_bytearray_put03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* self = (bytearray*)  tolua_tousertype(tolua_S,1,0);
  int tolua_var_38 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_39 = ((int)  tolua_tonumber(tolua_S,3,0));
  int tolua_var_40 = ((int)  tolua_tonumber(tolua_S,4,0));
  int tolua_var_41 = ((int)  tolua_tonumber(tolua_S,5,0));
  int tolua_var_42 = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'put'",NULL);
#endif
 try {
 {
  put(self,tolua_var_38,tolua_var_39,tolua_var_40,tolua_var_41,tolua_var_42);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_bytearray_put02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x0 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_get_rectangle_x0
static int tolua_get_rectangle_x0(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x0'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->x0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x0 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_set_rectangle_x0
static int tolua_set_rectangle_x0(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x0'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x0 = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y0 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_get_rectangle_y0
static int tolua_get_rectangle_y0(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y0'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->y0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y0 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_set_rectangle_y0
static int tolua_set_rectangle_y0(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y0'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y0 = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x1 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_get_rectangle_x1
static int tolua_get_rectangle_x1(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x1'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->x1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x1 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_set_rectangle_x1
static int tolua_set_rectangle_x1(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x1'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x1 = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y1 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_get_rectangle_y1
static int tolua_get_rectangle_y1(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y1'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->y1);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y1 of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_set_rectangle_y1
static int tolua_set_rectangle_y1(lua_State* tolua_S)
{
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y1'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y1 = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_new00
static int tolua_narray_rectangle_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  rectangle* tolua_ret = (rectangle*)  Mtolua_new(rectangle());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectangle");
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

/* method: new_local of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_new00_local
static int tolua_narray_rectangle_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  rectangle* tolua_ret = (rectangle*)  Mtolua_new(rectangle());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectangle");
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

/* method: new of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_new01
static int tolua_narray_rectangle_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rectangle* tolua_ret = (rectangle*)  Mtolua_new(rectangle(x0,y0,x1,y1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectangle");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectangle_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_new01_local
static int tolua_narray_rectangle_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rectangle* tolua_ret = (rectangle*)  Mtolua_new(rectangle(x0,y0,x1,y1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectangle_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: empty of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_empty00
static int tolua_narray_rectangle_empty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'empty'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->empty();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'empty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_width00
static int tolua_narray_rectangle_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'width'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->width();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: height of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_height00
static int tolua_narray_rectangle_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'height'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->height();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: include of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_include00
static int tolua_narray_rectangle_include00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'include'",NULL);
#endif
 try {
 {
  self->include(x,y);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'include'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: contains of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_contains00
static int tolua_narray_rectangle_contains00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'contains'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->contains(x,y);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'contains'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersect of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_intersect00
static int tolua_narray_rectangle_intersect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  rectangle other = *((rectangle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersect'",NULL);
#endif
 try {
 {
  self->intersect(other);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: include of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_include01
static int tolua_narray_rectangle_include01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  rectangle other = *((rectangle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'include'",NULL);
#endif
 try {
 {
  self->include(other);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_rectangle_include00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersection of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_intersection00
static int tolua_narray_rectangle_intersection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  rectangle other = *((rectangle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'intersection'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->intersection(other);
 {
#ifdef __cplusplus
 void* tolua_obj = Mtolua_new(rectangle(tolua_ret));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(rectangle));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
 }
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'intersection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: inclusion of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_inclusion00
static int tolua_narray_rectangle_inclusion00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  rectangle other = *((rectangle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'inclusion'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->inclusion(other);
 {
#ifdef __cplusplus
 void* tolua_obj = Mtolua_new(rectangle(tolua_ret));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(rectangle));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
 }
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'inclusion'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: grow of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_narray_rectangle_grow00
static int tolua_narray_rectangle_grow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectangle",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectangle* self = (rectangle*)  tolua_tousertype(tolua_S,1,0);
  int offset = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'grow'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->grow(offset);
 {
#ifdef __cplusplus
 void* tolua_obj = Mtolua_new(rectangle(tolua_ret));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
 void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(rectangle));
  tolua_pushusertype(tolua_S,tolua_obj,"rectangle");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
 }
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'grow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new00
static int tolua_narray_rectanglearray_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectanglearray");
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

/* method: new_local of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new00_local
static int tolua_narray_rectanglearray_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectanglearray");
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

/* method: new of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new01
static int tolua_narray_rectanglearray_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectanglearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new01_local
static int tolua_narray_rectanglearray_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectanglearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new02
static int tolua_narray_rectanglearray_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectanglearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new02_local
static int tolua_narray_rectanglearray_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectanglearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new03
static int tolua_narray_rectanglearray_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectanglearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new03_local
static int tolua_narray_rectanglearray_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1,d2));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectanglearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new04
static int tolua_narray_rectanglearray_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"rectanglearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_new04_local
static int tolua_narray_rectanglearray_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  rectanglearray* tolua_ret = (rectanglearray*)  Mtolua_new(rectanglearray(d0,d1,d2,d3));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"rectanglearray");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_delete00
static int tolua_narray_rectanglearray_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dealloc of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_dealloc00
static int tolua_narray_rectanglearray_dealloc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: resize of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_resize00
static int tolua_narray_rectanglearray_resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resize'",NULL);
#endif
 try {
 {
  self->resize(d0,d1,d2,d3);
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

/* method: renew of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_renew00
static int tolua_narray_rectanglearray_renew00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'renew'",NULL);
#endif
 try {
 {
  self->renew(d0,d1,d2,d3);
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

/* method: reshape of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_reshape00
static int tolua_narray_rectanglearray_reshape00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int d0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int d1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int d2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int d3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reshape'",NULL);
#endif
 try {
 {
  self->reshape(d0,d1,d2,d3);
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

/* method: rank of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_rank00
static int tolua_narray_rectanglearray_rank00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const rectanglearray* self = (const rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: dim of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_dim00
static int tolua_narray_rectanglearray_dim00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const rectanglearray* self = (const rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: at of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_at00
static int tolua_narray_rectanglearray_at00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->at(i0);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
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

/* method: at of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_at01
static int tolua_narray_rectanglearray_at01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->at(i0,i1);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_at00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_at02
static int tolua_narray_rectanglearray_at02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->at(i0,i1,i2);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_at01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: at of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_at03
static int tolua_narray_rectanglearray_at03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int i0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int i1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int i2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int i3 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->at(i0,i1,i2,i3);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_at02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length1d of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_length1d00
static int tolua_narray_rectanglearray_length1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const rectanglearray* self = (const rectanglearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length1d'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->length1d();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length1d'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: at1d of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_at1d00
static int tolua_narray_rectanglearray_at1d00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"const rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const rectanglearray* self = (const rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'at1d'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->at1d(i);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
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

/* method: reserve of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_reserve00
static int tolua_narray_rectanglearray_reserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: grow_to of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_grow_to00
static int tolua_narray_rectanglearray_grow_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: length of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_length00
static int tolua_narray_rectanglearray_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* method: push of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_push00
static int tolua_narray_rectanglearray_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  const rectangle* value = ((const rectangle*)  tolua_tousertype(tolua_S,2,0));
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

/* method: push of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_push01
static int tolua_narray_rectanglearray_push01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
  rectangle* value = ((rectangle*)  tolua_tousertype(tolua_S,2,0));
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
 return tolua_narray_rectanglearray_push00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: push of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_push02
static int tolua_narray_rectanglearray_push02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->push();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_rectanglearray_push01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: pop of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_pop00
static int tolua_narray_rectanglearray_pop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pop'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->pop();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
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

/* method: last of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_last00
static int tolua_narray_rectanglearray_last00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'last'",NULL);
#endif
 try {
 {
  rectangle& tolua_ret = (rectangle&)  self->last();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"rectangle");
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

/* method: clear of class  rectanglearray */
#ifndef TOLUA_DISABLE_tolua_narray_rectanglearray_clear00
static int tolua_narray_rectanglearray_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"rectanglearray",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  rectanglearray* self = (rectanglearray*)  tolua_tousertype(tolua_S,1,0);
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

/* function: move */
#ifndef TOLUA_DISABLE_tolua_narray_narray_move00
static int tolua_narray_narray_move00(lua_State* tolua_S)
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
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
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
 tolua_error(tolua_S,"#ferror in function 'move'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy00
static int tolua_narray_narray_copy00(lua_State* tolua_S)
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
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
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
 tolua_error(tolua_S,"#ferror in function 'copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims00
static int tolua_narray_narray_samedims00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  samedims(*a,*b);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'samedims'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike00
static int tolua_narray_narray_makelike00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*a,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'makelike'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: equal */
#ifndef TOLUA_DISABLE_tolua_narray_narray_equal00
static int tolua_narray_narray_equal00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
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
 tolua_error(tolua_S,"#ferror in function 'equal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: fill */
#ifndef TOLUA_DISABLE_tolua_narray_narray_fill00
static int tolua_narray_narray_fill00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float value = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  fill(*a,value);
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

/* function: move */
#ifndef TOLUA_DISABLE_tolua_narray_narray_move01
static int tolua_narray_narray_move01(lua_State* tolua_S)
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
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  move(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_move00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy01
static int tolua_narray_narray_copy01(lua_State* tolua_S)
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
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims01
static int tolua_narray_narray_samedims01(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* b = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  samedims(*a,*b);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_samedims00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike01
static int tolua_narray_narray_makelike01(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* b = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*a,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: equal */
#ifndef TOLUA_DISABLE_tolua_narray_narray_equal01
static int tolua_narray_narray_equal01(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* b = ((intarray*)  tolua_tousertype(tolua_S,2,0));
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
tolua_lerror:
 return tolua_narray_narray_equal00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: fill */
#ifndef TOLUA_DISABLE_tolua_narray_narray_fill01
static int tolua_narray_narray_fill01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int value = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  fill(*a,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_fill00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: move */
#ifndef TOLUA_DISABLE_tolua_narray_narray_move02
static int tolua_narray_narray_move02(lua_State* tolua_S)
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
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  move(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_move01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy02
static int tolua_narray_narray_copy02(lua_State* tolua_S)
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
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims02
static int tolua_narray_narray_samedims02(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  samedims(*a,*b);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_samedims01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike02
static int tolua_narray_narray_makelike02(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*a,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: equal */
#ifndef TOLUA_DISABLE_tolua_narray_narray_equal02
static int tolua_narray_narray_equal02(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
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
tolua_lerror:
 return tolua_narray_narray_equal01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: fill */
#ifndef TOLUA_DISABLE_tolua_narray_narray_fill02
static int tolua_narray_narray_fill02(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  unsigned char value = (( unsigned char)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  fill(*a,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_fill01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy03
static int tolua_narray_narray_copy03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy04
static int tolua_narray_narray_copy04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy05
static int tolua_narray_narray_copy05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy06
static int tolua_narray_narray_copy06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy07
static int tolua_narray_narray_copy07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: copy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_copy08
static int tolua_narray_narray_copy08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  copy(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_copy07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims03
static int tolua_narray_narray_samedims03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims04
static int tolua_narray_narray_samedims04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims05
static int tolua_narray_narray_samedims05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims06
static int tolua_narray_narray_samedims06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims07
static int tolua_narray_narray_samedims07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: samedims */
#ifndef TOLUA_DISABLE_tolua_narray_narray_samedims08
static int tolua_narray_narray_samedims08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  samedims(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_samedims07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike03
static int tolua_narray_narray_makelike03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike04
static int tolua_narray_narray_makelike04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike05
static int tolua_narray_narray_makelike05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* src = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike06
static int tolua_narray_narray_makelike06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* dest = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike07
static int tolua_narray_narray_makelike07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* dest = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: makelike */
#ifndef TOLUA_DISABLE_tolua_narray_narray_makelike08
static int tolua_narray_narray_makelike08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* dest = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* src = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  makelike(*dest,*src);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_makelike07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: dist2squared */
#ifndef TOLUA_DISABLE_tolua_narray_narray_dist2squared00
static int tolua_narray_narray_dist2squared00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  double tolua_ret = (double)  dist2squared(*a,*b);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dist2squared'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: dist2 */
#ifndef TOLUA_DISABLE_tolua_narray_narray_dist200
static int tolua_narray_narray_dist200(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  double tolua_ret = (double)  dist2(*a,*b);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dist2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: norm2 */
#ifndef TOLUA_DISABLE_tolua_narray_narray_norm200
static int tolua_narray_narray_norm200(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  norm2(*a);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'norm2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: normalize2 */
#ifndef TOLUA_DISABLE_tolua_narray_narray_normalize200
static int tolua_narray_narray_normalize200(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  normalize2(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'normalize2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_random */
#ifndef TOLUA_DISABLE_tolua_narray_narray_make_random00
static int tolua_narray_narray_make_random00(lua_State* tolua_S)
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
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
  float scale = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  make_random(*v,n,scale);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_random'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: perturb */
#ifndef TOLUA_DISABLE_tolua_narray_narray_perturb00
static int tolua_narray_narray_perturb00(lua_State* tolua_S)
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
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  perturb(*v,scale);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'perturb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_unit_vector */
#ifndef TOLUA_DISABLE_tolua_narray_narray_make_unit_vector00
static int tolua_narray_narray_make_unit_vector00(lua_State* tolua_S)
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
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
  int i = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  make_unit_vector(*a,n,i);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_unit_vector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max00
static int tolua_narray_narray_max00(lua_State* tolua_S)
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
  floatarray* tolua_var_43 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  float tolua_ret = (float)  max(*tolua_var_43);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'max'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min00
static int tolua_narray_narray_min00(lua_State* tolua_S)
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
  floatarray* tolua_var_44 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  float tolua_ret = (float)  min(*tolua_var_44);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'min'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: sum */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sum00
static int tolua_narray_narray_sum00(lua_State* tolua_S)
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
  floatarray* tolua_var_45 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  sum(*tolua_var_45);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: product */
#ifndef TOLUA_DISABLE_tolua_narray_narray_product00
static int tolua_narray_narray_product00(lua_State* tolua_S)
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
  floatarray* tolua_var_46 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  product(*tolua_var_46);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'product'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmax */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmax00
static int tolua_narray_narray_argmax00(lua_State* tolua_S)
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
  floatarray* tolua_var_47 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmax(*tolua_var_47);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'argmax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmin */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmin00
static int tolua_narray_narray_argmin00(lua_State* tolua_S)
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
  floatarray* tolua_var_48 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmin(*tolua_var_48);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'argmin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: randomly_permute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_randomly_permute00
static int tolua_narray_narray_randomly_permute00(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  randomly_permute(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randomly_permute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: iota */
#ifndef TOLUA_DISABLE_tolua_narray_narray_iota00
static int tolua_narray_narray_iota00(lua_State* tolua_S)
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
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  iota(*v,n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'iota'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add00
static int tolua_narray_narray_add00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*v);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max01
static int tolua_narray_narray_max01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_49 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  max(*tolua_var_49);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_max00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min01
static int tolua_narray_narray_min01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_50 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  min(*tolua_var_50);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_min00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sum */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sum01
static int tolua_narray_narray_sum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_51 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  sum(*tolua_var_51);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_sum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: product */
#ifndef TOLUA_DISABLE_tolua_narray_narray_product01
static int tolua_narray_narray_product01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_52 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  product(*tolua_var_52);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_product00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmax */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmax01
static int tolua_narray_narray_argmax01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_53 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmax(*tolua_var_53);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_argmax00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmin */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmin01
static int tolua_narray_narray_argmin01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_54 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmin(*tolua_var_54);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_argmin00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: randomly_permute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_randomly_permute01
static int tolua_narray_narray_randomly_permute01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  randomly_permute(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_randomly_permute00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: iota */
#ifndef TOLUA_DISABLE_tolua_narray_narray_iota01
static int tolua_narray_narray_iota01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* v = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  iota(*v,n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_iota00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add01
static int tolua_narray_narray_add01(lua_State* tolua_S)
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
  intarray* out = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* v = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*v);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max02
static int tolua_narray_narray_max02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_55 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  max(*tolua_var_55);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_max01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min02
static int tolua_narray_narray_min02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_56 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  min(*tolua_var_56);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_min01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sum */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sum02
static int tolua_narray_narray_sum02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_57 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  sum(*tolua_var_57);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_sum01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: product */
#ifndef TOLUA_DISABLE_tolua_narray_narray_product02
static int tolua_narray_narray_product02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_58 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  double tolua_ret = (double)  product(*tolua_var_58);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_product01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmax */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmax02
static int tolua_narray_narray_argmax02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_59 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmax(*tolua_var_59);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_argmax01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: argmin */
#ifndef TOLUA_DISABLE_tolua_narray_narray_argmin02
static int tolua_narray_narray_argmin02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_60 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  argmin(*tolua_var_60);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_argmin01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: randomly_permute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_randomly_permute02
static int tolua_narray_narray_randomly_permute02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  randomly_permute(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_randomly_permute01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: iota */
#ifndef TOLUA_DISABLE_tolua_narray_narray_iota02
static int tolua_narray_narray_iota02(lua_State* tolua_S)
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
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  iota(*v,n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_iota01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add02
static int tolua_narray_narray_add02(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* v = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*v);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: quicksort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_quicksort00
static int tolua_narray_narray_quicksort00(lua_State* tolua_S)
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
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  quicksort(*values);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'quicksort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse00
static int tolua_narray_narray_reverse00(lua_State* tolua_S)
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
  intarray* tolua_var_61 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* tolua_var_62 = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  reverse(*tolua_var_61,*tolua_var_62);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse01
static int tolua_narray_narray_reverse01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_63 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  reverse(*tolua_var_63);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_reverse00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse02
static int tolua_narray_narray_reverse02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_64 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* tolua_var_65 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  reverse(*tolua_var_64,*tolua_var_65);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_reverse01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse03
static int tolua_narray_narray_reverse03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_66 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  reverse(*tolua_var_66);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_reverse02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse04
static int tolua_narray_narray_reverse04(lua_State* tolua_S)
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
  bytearray* tolua_var_67 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* tolua_var_68 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  reverse(*tolua_var_67,*tolua_var_68);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_reverse03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: reverse */
#ifndef TOLUA_DISABLE_tolua_narray_narray_reverse05
static int tolua_narray_narray_reverse05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* tolua_var_69 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  reverse(*tolua_var_69);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_reverse04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_left */
#ifndef TOLUA_DISABLE_tolua_narray_narray_remove_left00
static int tolua_narray_narray_remove_left00(lua_State* tolua_S)
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
  floatarray* tolua_var_70 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int tolua_var_71 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  remove_left(*tolua_var_70,tolua_var_71);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove_left'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_left */
#ifndef TOLUA_DISABLE_tolua_narray_narray_remove_left01
static int tolua_narray_narray_remove_left01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_72 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int tolua_var_73 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  remove_left(*tolua_var_72,tolua_var_73);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_remove_left00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_left */
#ifndef TOLUA_DISABLE_tolua_narray_narray_remove_left02
static int tolua_narray_narray_remove_left02(lua_State* tolua_S)
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
  bytearray* tolua_var_74 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int tolua_var_75 = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  remove_left(*tolua_var_74,tolua_var_75);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_remove_left01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcompare */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcompare00
static int tolua_narray_narray_rowcompare00(lua_State* tolua_S)
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
  floatarray* values = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  int tolua_ret = (int)  rowcompare(*values,i,j);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowcompare'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowswap */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowswap00
static int tolua_narray_narray_rowswap00(lua_State* tolua_S)
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
  floatarray* values = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowswap(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowswap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy00
static int tolua_narray_narray_rowcopy00(lua_State* tolua_S)
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
  floatarray* values = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowcopy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy01
static int tolua_narray_narray_rowcopy01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  rowcopy(*a,i,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy02
static int tolua_narray_narray_rowcopy02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* b = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int i = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*a,*b,i);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted00
static int tolua_narray_narray_rowsorted00(lua_State* tolua_S)
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
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowsorted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted01
static int tolua_narray_narray_rowsorted01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data,*permutation);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowsorted00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted00
static int tolua_narray_narray_check_rowsorted00(lua_State* tolua_S)
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
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  check_rowsorted(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'check_rowsorted'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted01
static int tolua_narray_narray_check_rowsorted01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  check_rowsorted(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_check_rowsorted00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort00
static int tolua_narray_narray_rowsort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* values = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int start = ((int)  tolua_tonumber(tolua_S,3,0));
  int end = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rowsort(*index,*values,start,end);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowsort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort01
static int tolua_narray_narray_rowsort01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* values = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowsort(*index,*values);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpermute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpermute00
static int tolua_narray_narray_rowpermute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpermute(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowpermute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort02
static int tolua_narray_narray_rowsort02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rowsort(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpush */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpush00
static int tolua_narray_narray_rowpush00(lua_State* tolua_S)
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
  floatarray* table = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* data = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpush(*table,*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rowpush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcompare */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcompare01
static int tolua_narray_narray_rowcompare01(lua_State* tolua_S)
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
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  int tolua_ret = (int)  rowcompare(*values,i,j);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowcompare00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowswap */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowswap01
static int tolua_narray_narray_rowswap01(lua_State* tolua_S)
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
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowswap(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowswap00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy03
static int tolua_narray_narray_rowcopy03(lua_State* tolua_S)
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
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy04
static int tolua_narray_narray_rowcopy04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  intarray* b = ((intarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  rowcopy(*a,i,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy05
static int tolua_narray_narray_rowcopy05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* b = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int i = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*a,*b,i);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted02
static int tolua_narray_narray_check_rowsorted02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  check_rowsorted(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_check_rowsorted01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted03
static int tolua_narray_narray_check_rowsorted03(lua_State* tolua_S)
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
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  check_rowsorted(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_check_rowsorted02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted02
static int tolua_narray_narray_rowsorted02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowsorted01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted03
static int tolua_narray_narray_rowsorted03(lua_State* tolua_S)
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
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data,*permutation);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowsorted02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort03
static int tolua_narray_narray_rowsort03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int start = ((int)  tolua_tonumber(tolua_S,3,0));
  int end = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rowsort(*index,*values,start,end);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort04
static int tolua_narray_narray_rowsort04(lua_State* tolua_S)
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
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* values = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowsort(*index,*values);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpermute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpermute01
static int tolua_narray_narray_rowpermute01(lua_State* tolua_S)
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
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpermute(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowpermute00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort05
static int tolua_narray_narray_rowsort05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rowsort(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpush */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpush01
static int tolua_narray_narray_rowpush01(lua_State* tolua_S)
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
  intarray* table = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* data = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpush(*table,*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowpush00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcompare */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcompare02
static int tolua_narray_narray_rowcompare02(lua_State* tolua_S)
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
  bytearray* values = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  int tolua_ret = (int)  rowcompare(*values,i,j);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowcompare01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowswap */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowswap02
static int tolua_narray_narray_rowswap02(lua_State* tolua_S)
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
  bytearray* values = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowswap(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowswap01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy06
static int tolua_narray_narray_rowcopy06(lua_State* tolua_S)
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
  bytearray* values = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int j = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*values,i,j);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy07
static int tolua_narray_narray_rowcopy07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  rowcopy(*a,i,*b);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowcopy */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowcopy08
static int tolua_narray_narray_rowcopy08(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* b = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int i = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  rowcopy(*a,*b,i);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowcopy07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted04
static int tolua_narray_narray_check_rowsorted04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  check_rowsorted(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_check_rowsorted03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_check_rowsorted05
static int tolua_narray_narray_check_rowsorted05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  check_rowsorted(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_check_rowsorted04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted04
static int tolua_narray_narray_rowsorted04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowsorted03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsorted */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsorted05
static int tolua_narray_narray_rowsorted05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  bool tolua_ret = (bool)  rowsorted(*data,*permutation);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_narray_narray_rowsorted04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort06
static int tolua_narray_narray_rowsort06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* values = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int start = ((int)  tolua_tonumber(tolua_S,3,0));
  int end = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  rowsort(*index,*values,start,end);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort07
static int tolua_narray_narray_rowsort07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* index = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* values = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowsort(*index,*values);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpermute */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpermute02
static int tolua_narray_narray_rowpermute02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* permutation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpermute(*data,*permutation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowpermute01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowsort */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowsort08
static int tolua_narray_narray_rowsort08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  rowsort(*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowsort07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: rowpush */
#ifndef TOLUA_DISABLE_tolua_narray_narray_rowpush02
static int tolua_narray_narray_rowpush02(lua_State* tolua_S)
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
  bytearray* table = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* data = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  rowpush(*table,*data);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_rowpush01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: abs */
#ifndef TOLUA_DISABLE_tolua_narray_narray_abs00
static int tolua_narray_narray_abs00(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  abs(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'abs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max03
static int tolua_narray_narray_max03(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  max(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_max02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min03
static int tolua_narray_narray_min03(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  min(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_min02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add03
static int tolua_narray_narray_add03(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  add(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub00
static int tolua_narray_narray_sub00(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  sub(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub01
static int tolua_narray_narray_sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int in = ((int)  tolua_tonumber(tolua_S,1,0));
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  sub(in,*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul00
static int tolua_narray_narray_mul00(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  mul(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div00
static int tolua_narray_narray_div00(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int in = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  div(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max04
static int tolua_narray_narray_max04(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  max(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_max03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min04
static int tolua_narray_narray_min04(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  min(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_min03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add04
static int tolua_narray_narray_add04(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub02
static int tolua_narray_narray_sub02(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  sub(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul01
static int tolua_narray_narray_mul01(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  mul(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div01
static int tolua_narray_narray_div01(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  div(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add05
static int tolua_narray_narray_add05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  add(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub03
static int tolua_narray_narray_sub03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  sub(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul02
static int tolua_narray_narray_mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  mul(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div02
static int tolua_narray_narray_div02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  div(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: abs */
#ifndef TOLUA_DISABLE_tolua_narray_narray_abs01
static int tolua_narray_narray_abs01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  abs(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_abs00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: exp */
#ifndef TOLUA_DISABLE_tolua_narray_narray_exp00
static int tolua_narray_narray_exp00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  exp(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'exp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: log */
#ifndef TOLUA_DISABLE_tolua_narray_narray_log00
static int tolua_narray_narray_log00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  log(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'log'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: sin */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sin00
static int tolua_narray_narray_sin00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  sin(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cos */
#ifndef TOLUA_DISABLE_tolua_narray_narray_cos00
static int tolua_narray_narray_cos00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  cos(*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cos'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max05
static int tolua_narray_narray_max05(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  max(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_max04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min05
static int tolua_narray_narray_min05(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  min(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_min04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add06
static int tolua_narray_narray_add06(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  add(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub04
static int tolua_narray_narray_sub04(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  sub(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub05
static int tolua_narray_narray_sub05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  float in = ((float)  tolua_tonumber(tolua_S,1,0));
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  sub(in,*out);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul03
static int tolua_narray_narray_mul03(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  mul(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div03
static int tolua_narray_narray_div03(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  div(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pow */
#ifndef TOLUA_DISABLE_tolua_narray_narray_pow00
static int tolua_narray_narray_pow00(lua_State* tolua_S)
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
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float in = ((float)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  pow(*out,in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max06
static int tolua_narray_narray_max06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  max(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_max05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min06
static int tolua_narray_narray_min06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  min(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_min05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add07
static int tolua_narray_narray_add07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub06
static int tolua_narray_narray_sub06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  sub(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul04
static int tolua_narray_narray_mul04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  mul(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div04
static int tolua_narray_narray_div04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  div(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pow */
#ifndef TOLUA_DISABLE_tolua_narray_narray_pow01
static int tolua_narray_narray_pow01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  pow(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_pow00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add08
static int tolua_narray_narray_add08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in1 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in2 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  add(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub07
static int tolua_narray_narray_sub07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in1 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in2 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  sub(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul05
static int tolua_narray_narray_mul05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in1 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in2 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  mul(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div05
static int tolua_narray_narray_div05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in1 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in2 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  div(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pow */
#ifndef TOLUA_DISABLE_tolua_narray_narray_pow02
static int tolua_narray_narray_pow02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in1 = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in2 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  pow(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_pow01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: max */
#ifndef TOLUA_DISABLE_tolua_narray_narray_max07
static int tolua_narray_narray_max07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  max(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_max06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: min */
#ifndef TOLUA_DISABLE_tolua_narray_narray_min07
static int tolua_narray_narray_min07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  min(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_min06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add09
static int tolua_narray_narray_add09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  add(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub08
static int tolua_narray_narray_sub08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  sub(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul06
static int tolua_narray_narray_mul06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  mul(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div06
static int tolua_narray_narray_div06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  div(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pow */
#ifndef TOLUA_DISABLE_tolua_narray_narray_pow03
static int tolua_narray_narray_pow03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  pow(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_pow02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: add */
#ifndef TOLUA_DISABLE_tolua_narray_narray_add10
static int tolua_narray_narray_add10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  add(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_add09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: sub */
#ifndef TOLUA_DISABLE_tolua_narray_narray_sub09
static int tolua_narray_narray_sub09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  sub(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_sub08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: mul */
#ifndef TOLUA_DISABLE_tolua_narray_narray_mul07
static int tolua_narray_narray_mul07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  mul(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_mul06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: div */
#ifndef TOLUA_DISABLE_tolua_narray_narray_div07
static int tolua_narray_narray_div07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  div(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_div06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pow */
#ifndef TOLUA_DISABLE_tolua_narray_narray_pow04
static int tolua_narray_narray_pow04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in1 = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in2 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  pow(*out,*in1,*in2);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_narray_narray_pow03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_narray_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"floatarray","floatarray","",tolua_collect_floatarray);
 #else
 tolua_cclass(tolua_S,"floatarray","floatarray","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"floatarray");
  tolua_function(tolua_S,"new",tolua_narray_floatarray_new00);
  tolua_function(tolua_S,"new_local",tolua_narray_floatarray_new00_local);
  tolua_function(tolua_S,".call",tolua_narray_floatarray_new00_local);
  tolua_function(tolua_S,"new",tolua_narray_floatarray_new01);
  tolua_function(tolua_S,"new_local",tolua_narray_floatarray_new01_local);
  tolua_function(tolua_S,".call",tolua_narray_floatarray_new01_local);
  tolua_function(tolua_S,"new",tolua_narray_floatarray_new02);
  tolua_function(tolua_S,"new_local",tolua_narray_floatarray_new02_local);
  tolua_function(tolua_S,".call",tolua_narray_floatarray_new02_local);
  tolua_function(tolua_S,"new",tolua_narray_floatarray_new03);
  tolua_function(tolua_S,"new_local",tolua_narray_floatarray_new03_local);
  tolua_function(tolua_S,".call",tolua_narray_floatarray_new03_local);
  tolua_function(tolua_S,"new",tolua_narray_floatarray_new04);
  tolua_function(tolua_S,"new_local",tolua_narray_floatarray_new04_local);
  tolua_function(tolua_S,".call",tolua_narray_floatarray_new04_local);
  tolua_function(tolua_S,"delete",tolua_narray_floatarray_delete00);
  tolua_function(tolua_S,"dealloc",tolua_narray_floatarray_dealloc00);
  tolua_function(tolua_S,"resize",tolua_narray_floatarray_resize00);
  tolua_function(tolua_S,"renew",tolua_narray_floatarray_renew00);
  tolua_function(tolua_S,"reshape",tolua_narray_floatarray_reshape00);
  tolua_function(tolua_S,"rank",tolua_narray_floatarray_rank00);
  tolua_function(tolua_S,"dim",tolua_narray_floatarray_dim00);
  tolua_function(tolua_S,"at",tolua_narray_floatarray_at00);
  tolua_function(tolua_S,"at",tolua_narray_floatarray_at01);
  tolua_function(tolua_S,"at",tolua_narray_floatarray_at02);
  tolua_function(tolua_S,"at",tolua_narray_floatarray_at03);
  tolua_function(tolua_S,"length1d",tolua_narray_floatarray_length1d00);
  tolua_function(tolua_S,"at1d",tolua_narray_floatarray_at1d00);
  tolua_function(tolua_S,"reserve",tolua_narray_floatarray_reserve00);
  tolua_function(tolua_S,"grow_to",tolua_narray_floatarray_grow_to00);
  tolua_function(tolua_S,"length",tolua_narray_floatarray_length00);
  tolua_function(tolua_S,"push",tolua_narray_floatarray_push00);
  tolua_function(tolua_S,"push",tolua_narray_floatarray_push01);
  tolua_function(tolua_S,"pop",tolua_narray_floatarray_pop00);
  tolua_function(tolua_S,"last",tolua_narray_floatarray_last00);
  tolua_function(tolua_S,"clear",tolua_narray_floatarray_clear00);
  tolua_function(tolua_S,"put",tolua_narray_floatarray_put00);
  tolua_function(tolua_S,"put",tolua_narray_floatarray_put01);
  tolua_function(tolua_S,"put",tolua_narray_floatarray_put02);
  tolua_function(tolua_S,"put",tolua_narray_floatarray_put03);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"intarray","intarray","",tolua_collect_intarray);
 #else
 tolua_cclass(tolua_S,"intarray","intarray","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"intarray");
  tolua_function(tolua_S,"new",tolua_narray_intarray_new00);
  tolua_function(tolua_S,"new_local",tolua_narray_intarray_new00_local);
  tolua_function(tolua_S,".call",tolua_narray_intarray_new00_local);
  tolua_function(tolua_S,"new",tolua_narray_intarray_new01);
  tolua_function(tolua_S,"new_local",tolua_narray_intarray_new01_local);
  tolua_function(tolua_S,".call",tolua_narray_intarray_new01_local);
  tolua_function(tolua_S,"new",tolua_narray_intarray_new02);
  tolua_function(tolua_S,"new_local",tolua_narray_intarray_new02_local);
  tolua_function(tolua_S,".call",tolua_narray_intarray_new02_local);
  tolua_function(tolua_S,"new",tolua_narray_intarray_new03);
  tolua_function(tolua_S,"new_local",tolua_narray_intarray_new03_local);
  tolua_function(tolua_S,".call",tolua_narray_intarray_new03_local);
  tolua_function(tolua_S,"new",tolua_narray_intarray_new04);
  tolua_function(tolua_S,"new_local",tolua_narray_intarray_new04_local);
  tolua_function(tolua_S,".call",tolua_narray_intarray_new04_local);
  tolua_function(tolua_S,"delete",tolua_narray_intarray_delete00);
  tolua_function(tolua_S,"dealloc",tolua_narray_intarray_dealloc00);
  tolua_function(tolua_S,"resize",tolua_narray_intarray_resize00);
  tolua_function(tolua_S,"renew",tolua_narray_intarray_renew00);
  tolua_function(tolua_S,"reshape",tolua_narray_intarray_reshape00);
  tolua_function(tolua_S,"rank",tolua_narray_intarray_rank00);
  tolua_function(tolua_S,"dim",tolua_narray_intarray_dim00);
  tolua_function(tolua_S,"at",tolua_narray_intarray_at00);
  tolua_function(tolua_S,"at",tolua_narray_intarray_at01);
  tolua_function(tolua_S,"at",tolua_narray_intarray_at02);
  tolua_function(tolua_S,"at",tolua_narray_intarray_at03);
  tolua_function(tolua_S,"length1d",tolua_narray_intarray_length1d00);
  tolua_function(tolua_S,"at1d",tolua_narray_intarray_at1d00);
  tolua_function(tolua_S,"reserve",tolua_narray_intarray_reserve00);
  tolua_function(tolua_S,"grow_to",tolua_narray_intarray_grow_to00);
  tolua_function(tolua_S,"length",tolua_narray_intarray_length00);
  tolua_function(tolua_S,"push",tolua_narray_intarray_push00);
  tolua_function(tolua_S,"push",tolua_narray_intarray_push01);
  tolua_function(tolua_S,"pop",tolua_narray_intarray_pop00);
  tolua_function(tolua_S,"last",tolua_narray_intarray_last00);
  tolua_function(tolua_S,"clear",tolua_narray_intarray_clear00);
  tolua_function(tolua_S,"put",tolua_narray_intarray_put00);
  tolua_function(tolua_S,"put",tolua_narray_intarray_put01);
  tolua_function(tolua_S,"put",tolua_narray_intarray_put02);
  tolua_function(tolua_S,"put",tolua_narray_intarray_put03);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"bytearray","bytearray","",tolua_collect_bytearray);
 #else
 tolua_cclass(tolua_S,"bytearray","bytearray","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"bytearray");
  tolua_function(tolua_S,"new",tolua_narray_bytearray_new00);
  tolua_function(tolua_S,"new_local",tolua_narray_bytearray_new00_local);
  tolua_function(tolua_S,".call",tolua_narray_bytearray_new00_local);
  tolua_function(tolua_S,"new",tolua_narray_bytearray_new01);
  tolua_function(tolua_S,"new_local",tolua_narray_bytearray_new01_local);
  tolua_function(tolua_S,".call",tolua_narray_bytearray_new01_local);
  tolua_function(tolua_S,"new",tolua_narray_bytearray_new02);
  tolua_function(tolua_S,"new_local",tolua_narray_bytearray_new02_local);
  tolua_function(tolua_S,".call",tolua_narray_bytearray_new02_local);
  tolua_function(tolua_S,"new",tolua_narray_bytearray_new03);
  tolua_function(tolua_S,"new_local",tolua_narray_bytearray_new03_local);
  tolua_function(tolua_S,".call",tolua_narray_bytearray_new03_local);
  tolua_function(tolua_S,"new",tolua_narray_bytearray_new04);
  tolua_function(tolua_S,"new_local",tolua_narray_bytearray_new04_local);
  tolua_function(tolua_S,".call",tolua_narray_bytearray_new04_local);
  tolua_function(tolua_S,"delete",tolua_narray_bytearray_delete00);
  tolua_function(tolua_S,"dealloc",tolua_narray_bytearray_dealloc00);
  tolua_function(tolua_S,"resize",tolua_narray_bytearray_resize00);
  tolua_function(tolua_S,"renew",tolua_narray_bytearray_renew00);
  tolua_function(tolua_S,"reshape",tolua_narray_bytearray_reshape00);
  tolua_function(tolua_S,"rank",tolua_narray_bytearray_rank00);
  tolua_function(tolua_S,"dim",tolua_narray_bytearray_dim00);
  tolua_function(tolua_S,"at",tolua_narray_bytearray_at00);
  tolua_function(tolua_S,"at",tolua_narray_bytearray_at01);
  tolua_function(tolua_S,"at",tolua_narray_bytearray_at02);
  tolua_function(tolua_S,"at",tolua_narray_bytearray_at03);
  tolua_function(tolua_S,"length1d",tolua_narray_bytearray_length1d00);
  tolua_function(tolua_S,"at1d",tolua_narray_bytearray_at1d00);
  tolua_function(tolua_S,"reserve",tolua_narray_bytearray_reserve00);
  tolua_function(tolua_S,"grow_to",tolua_narray_bytearray_grow_to00);
  tolua_function(tolua_S,"length",tolua_narray_bytearray_length00);
  tolua_function(tolua_S,"push",tolua_narray_bytearray_push00);
  tolua_function(tolua_S,"pop",tolua_narray_bytearray_pop00);
  tolua_function(tolua_S,"last",tolua_narray_bytearray_last00);
  tolua_function(tolua_S,"clear",tolua_narray_bytearray_clear00);
  tolua_function(tolua_S,"put",tolua_narray_bytearray_put00);
  tolua_function(tolua_S,"put",tolua_narray_bytearray_put01);
  tolua_function(tolua_S,"put",tolua_narray_bytearray_put02);
  tolua_function(tolua_S,"put",tolua_narray_bytearray_put03);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"rectangle","rectangle","",tolua_collect_rectangle);
 #else
 tolua_cclass(tolua_S,"rectangle","rectangle","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"rectangle");
  tolua_variable(tolua_S,"x0",tolua_get_rectangle_x0,tolua_set_rectangle_x0);
  tolua_variable(tolua_S,"y0",tolua_get_rectangle_y0,tolua_set_rectangle_y0);
  tolua_variable(tolua_S,"x1",tolua_get_rectangle_x1,tolua_set_rectangle_x1);
  tolua_variable(tolua_S,"y1",tolua_get_rectangle_y1,tolua_set_rectangle_y1);
  tolua_function(tolua_S,"new",tolua_narray_rectangle_new00);
  tolua_function(tolua_S,"new_local",tolua_narray_rectangle_new00_local);
  tolua_function(tolua_S,".call",tolua_narray_rectangle_new00_local);
  tolua_function(tolua_S,"new",tolua_narray_rectangle_new01);
  tolua_function(tolua_S,"new_local",tolua_narray_rectangle_new01_local);
  tolua_function(tolua_S,".call",tolua_narray_rectangle_new01_local);
  tolua_function(tolua_S,"empty",tolua_narray_rectangle_empty00);
  tolua_function(tolua_S,"width",tolua_narray_rectangle_width00);
  tolua_function(tolua_S,"height",tolua_narray_rectangle_height00);
  tolua_function(tolua_S,"include",tolua_narray_rectangle_include00);
  tolua_function(tolua_S,"contains",tolua_narray_rectangle_contains00);
  tolua_function(tolua_S,"intersect",tolua_narray_rectangle_intersect00);
  tolua_function(tolua_S,"include",tolua_narray_rectangle_include01);
  tolua_function(tolua_S,"intersection",tolua_narray_rectangle_intersection00);
  tolua_function(tolua_S,"inclusion",tolua_narray_rectangle_inclusion00);
  tolua_function(tolua_S,"grow",tolua_narray_rectangle_grow00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"rectanglearray","rectanglearray","",tolua_collect_rectanglearray);
 #else
 tolua_cclass(tolua_S,"rectanglearray","rectanglearray","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"rectanglearray");
  tolua_function(tolua_S,"new",tolua_narray_rectanglearray_new00);
  tolua_function(tolua_S,"new_local",tolua_narray_rectanglearray_new00_local);
  tolua_function(tolua_S,".call",tolua_narray_rectanglearray_new00_local);
  tolua_function(tolua_S,"new",tolua_narray_rectanglearray_new01);
  tolua_function(tolua_S,"new_local",tolua_narray_rectanglearray_new01_local);
  tolua_function(tolua_S,".call",tolua_narray_rectanglearray_new01_local);
  tolua_function(tolua_S,"new",tolua_narray_rectanglearray_new02);
  tolua_function(tolua_S,"new_local",tolua_narray_rectanglearray_new02_local);
  tolua_function(tolua_S,".call",tolua_narray_rectanglearray_new02_local);
  tolua_function(tolua_S,"new",tolua_narray_rectanglearray_new03);
  tolua_function(tolua_S,"new_local",tolua_narray_rectanglearray_new03_local);
  tolua_function(tolua_S,".call",tolua_narray_rectanglearray_new03_local);
  tolua_function(tolua_S,"new",tolua_narray_rectanglearray_new04);
  tolua_function(tolua_S,"new_local",tolua_narray_rectanglearray_new04_local);
  tolua_function(tolua_S,".call",tolua_narray_rectanglearray_new04_local);
  tolua_function(tolua_S,"delete",tolua_narray_rectanglearray_delete00);
  tolua_function(tolua_S,"dealloc",tolua_narray_rectanglearray_dealloc00);
  tolua_function(tolua_S,"resize",tolua_narray_rectanglearray_resize00);
  tolua_function(tolua_S,"renew",tolua_narray_rectanglearray_renew00);
  tolua_function(tolua_S,"reshape",tolua_narray_rectanglearray_reshape00);
  tolua_function(tolua_S,"rank",tolua_narray_rectanglearray_rank00);
  tolua_function(tolua_S,"dim",tolua_narray_rectanglearray_dim00);
  tolua_function(tolua_S,"at",tolua_narray_rectanglearray_at00);
  tolua_function(tolua_S,"at",tolua_narray_rectanglearray_at01);
  tolua_function(tolua_S,"at",tolua_narray_rectanglearray_at02);
  tolua_function(tolua_S,"at",tolua_narray_rectanglearray_at03);
  tolua_function(tolua_S,"length1d",tolua_narray_rectanglearray_length1d00);
  tolua_function(tolua_S,"at1d",tolua_narray_rectanglearray_at1d00);
  tolua_function(tolua_S,"reserve",tolua_narray_rectanglearray_reserve00);
  tolua_function(tolua_S,"grow_to",tolua_narray_rectanglearray_grow_to00);
  tolua_function(tolua_S,"length",tolua_narray_rectanglearray_length00);
  tolua_function(tolua_S,"push",tolua_narray_rectanglearray_push00);
  tolua_function(tolua_S,"push",tolua_narray_rectanglearray_push01);
  tolua_function(tolua_S,"push",tolua_narray_rectanglearray_push02);
  tolua_function(tolua_S,"pop",tolua_narray_rectanglearray_pop00);
  tolua_function(tolua_S,"last",tolua_narray_rectanglearray_last00);
  tolua_function(tolua_S,"clear",tolua_narray_rectanglearray_clear00);
 tolua_endmodule(tolua_S);
 tolua_module(tolua_S,"narray",0);
 tolua_beginmodule(tolua_S,"narray");
  tolua_function(tolua_S,"move",tolua_narray_narray_move00);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy00);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims00);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike00);
  tolua_function(tolua_S,"equal",tolua_narray_narray_equal00);
  tolua_function(tolua_S,"fill",tolua_narray_narray_fill00);
  tolua_function(tolua_S,"move",tolua_narray_narray_move01);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy01);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims01);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike01);
  tolua_function(tolua_S,"equal",tolua_narray_narray_equal01);
  tolua_function(tolua_S,"fill",tolua_narray_narray_fill01);
  tolua_function(tolua_S,"move",tolua_narray_narray_move02);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy02);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims02);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike02);
  tolua_function(tolua_S,"equal",tolua_narray_narray_equal02);
  tolua_function(tolua_S,"fill",tolua_narray_narray_fill02);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy03);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy04);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy05);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy06);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy07);
  tolua_function(tolua_S,"copy",tolua_narray_narray_copy08);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims03);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims04);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims05);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims06);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims07);
  tolua_function(tolua_S,"samedims",tolua_narray_narray_samedims08);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike03);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike04);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike05);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike06);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike07);
  tolua_function(tolua_S,"makelike",tolua_narray_narray_makelike08);
  tolua_function(tolua_S,"dist2squared",tolua_narray_narray_dist2squared00);
  tolua_function(tolua_S,"dist2",tolua_narray_narray_dist200);
  tolua_function(tolua_S,"norm2",tolua_narray_narray_norm200);
  tolua_function(tolua_S,"normalize2",tolua_narray_narray_normalize200);
  tolua_function(tolua_S,"make_random",tolua_narray_narray_make_random00);
  tolua_function(tolua_S,"perturb",tolua_narray_narray_perturb00);
  tolua_function(tolua_S,"make_unit_vector",tolua_narray_narray_make_unit_vector00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max00);
  tolua_function(tolua_S,"min",tolua_narray_narray_min00);
  tolua_function(tolua_S,"sum",tolua_narray_narray_sum00);
  tolua_function(tolua_S,"product",tolua_narray_narray_product00);
  tolua_function(tolua_S,"argmax",tolua_narray_narray_argmax00);
  tolua_function(tolua_S,"argmin",tolua_narray_narray_argmin00);
  tolua_function(tolua_S,"randomly_permute",tolua_narray_narray_randomly_permute00);
  tolua_function(tolua_S,"iota",tolua_narray_narray_iota00);
  tolua_function(tolua_S,"add",tolua_narray_narray_add00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max01);
  tolua_function(tolua_S,"min",tolua_narray_narray_min01);
  tolua_function(tolua_S,"sum",tolua_narray_narray_sum01);
  tolua_function(tolua_S,"product",tolua_narray_narray_product01);
  tolua_function(tolua_S,"argmax",tolua_narray_narray_argmax01);
  tolua_function(tolua_S,"argmin",tolua_narray_narray_argmin01);
  tolua_function(tolua_S,"randomly_permute",tolua_narray_narray_randomly_permute01);
  tolua_function(tolua_S,"iota",tolua_narray_narray_iota01);
  tolua_function(tolua_S,"add",tolua_narray_narray_add01);
  tolua_function(tolua_S,"max",tolua_narray_narray_max02);
  tolua_function(tolua_S,"min",tolua_narray_narray_min02);
  tolua_function(tolua_S,"sum",tolua_narray_narray_sum02);
  tolua_function(tolua_S,"product",tolua_narray_narray_product02);
  tolua_function(tolua_S,"argmax",tolua_narray_narray_argmax02);
  tolua_function(tolua_S,"argmin",tolua_narray_narray_argmin02);
  tolua_function(tolua_S,"randomly_permute",tolua_narray_narray_randomly_permute02);
  tolua_function(tolua_S,"iota",tolua_narray_narray_iota02);
  tolua_function(tolua_S,"add",tolua_narray_narray_add02);
  tolua_function(tolua_S,"quicksort",tolua_narray_narray_quicksort00);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse00);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse01);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse02);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse03);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse04);
  tolua_function(tolua_S,"reverse",tolua_narray_narray_reverse05);
  tolua_function(tolua_S,"remove_left",tolua_narray_narray_remove_left00);
  tolua_function(tolua_S,"remove_left",tolua_narray_narray_remove_left01);
  tolua_function(tolua_S,"remove_left",tolua_narray_narray_remove_left02);
  tolua_function(tolua_S,"rowcompare",tolua_narray_narray_rowcompare00);
  tolua_function(tolua_S,"rowswap",tolua_narray_narray_rowswap00);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy00);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy01);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy02);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted00);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted01);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted00);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted01);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort00);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort01);
  tolua_function(tolua_S,"rowpermute",tolua_narray_narray_rowpermute00);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort02);
  tolua_function(tolua_S,"rowpush",tolua_narray_narray_rowpush00);
  tolua_function(tolua_S,"rowcompare",tolua_narray_narray_rowcompare01);
  tolua_function(tolua_S,"rowswap",tolua_narray_narray_rowswap01);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy03);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy04);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy05);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted02);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted03);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted02);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted03);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort03);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort04);
  tolua_function(tolua_S,"rowpermute",tolua_narray_narray_rowpermute01);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort05);
  tolua_function(tolua_S,"rowpush",tolua_narray_narray_rowpush01);
  tolua_function(tolua_S,"rowcompare",tolua_narray_narray_rowcompare02);
  tolua_function(tolua_S,"rowswap",tolua_narray_narray_rowswap02);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy06);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy07);
  tolua_function(tolua_S,"rowcopy",tolua_narray_narray_rowcopy08);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted04);
  tolua_function(tolua_S,"check_rowsorted",tolua_narray_narray_check_rowsorted05);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted04);
  tolua_function(tolua_S,"rowsorted",tolua_narray_narray_rowsorted05);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort06);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort07);
  tolua_function(tolua_S,"rowpermute",tolua_narray_narray_rowpermute02);
  tolua_function(tolua_S,"rowsort",tolua_narray_narray_rowsort08);
  tolua_function(tolua_S,"rowpush",tolua_narray_narray_rowpush02);
  tolua_function(tolua_S,"abs",tolua_narray_narray_abs00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max03);
  tolua_function(tolua_S,"min",tolua_narray_narray_min03);
  tolua_function(tolua_S,"add",tolua_narray_narray_add03);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub00);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub01);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul00);
  tolua_function(tolua_S,"div",tolua_narray_narray_div00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max04);
  tolua_function(tolua_S,"min",tolua_narray_narray_min04);
  tolua_function(tolua_S,"add",tolua_narray_narray_add04);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub02);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul01);
  tolua_function(tolua_S,"div",tolua_narray_narray_div01);
  tolua_function(tolua_S,"add",tolua_narray_narray_add05);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub03);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul02);
  tolua_function(tolua_S,"div",tolua_narray_narray_div02);
  tolua_function(tolua_S,"abs",tolua_narray_narray_abs01);
  tolua_function(tolua_S,"exp",tolua_narray_narray_exp00);
  tolua_function(tolua_S,"log",tolua_narray_narray_log00);
  tolua_function(tolua_S,"sin",tolua_narray_narray_sin00);
  tolua_function(tolua_S,"cos",tolua_narray_narray_cos00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max05);
  tolua_function(tolua_S,"min",tolua_narray_narray_min05);
  tolua_function(tolua_S,"add",tolua_narray_narray_add06);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub04);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub05);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul03);
  tolua_function(tolua_S,"div",tolua_narray_narray_div03);
  tolua_function(tolua_S,"pow",tolua_narray_narray_pow00);
  tolua_function(tolua_S,"max",tolua_narray_narray_max06);
  tolua_function(tolua_S,"min",tolua_narray_narray_min06);
  tolua_function(tolua_S,"add",tolua_narray_narray_add07);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub06);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul04);
  tolua_function(tolua_S,"div",tolua_narray_narray_div04);
  tolua_function(tolua_S,"pow",tolua_narray_narray_pow01);
  tolua_function(tolua_S,"add",tolua_narray_narray_add08);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub07);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul05);
  tolua_function(tolua_S,"div",tolua_narray_narray_div05);
  tolua_function(tolua_S,"pow",tolua_narray_narray_pow02);
  tolua_function(tolua_S,"max",tolua_narray_narray_max07);
  tolua_function(tolua_S,"min",tolua_narray_narray_min07);
  tolua_function(tolua_S,"add",tolua_narray_narray_add09);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub08);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul06);
  tolua_function(tolua_S,"div",tolua_narray_narray_div06);
  tolua_function(tolua_S,"pow",tolua_narray_narray_pow03);
  tolua_function(tolua_S,"add",tolua_narray_narray_add10);
  tolua_function(tolua_S,"sub",tolua_narray_narray_sub09);
  tolua_function(tolua_S,"mul",tolua_narray_narray_mul07);
  tolua_function(tolua_S,"div",tolua_narray_narray_div07);
  tolua_function(tolua_S,"pow",tolua_narray_narray_pow04);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_narray (lua_State* tolua_S) {
 return tolua_narray_open(tolua_S);
};
#endif

