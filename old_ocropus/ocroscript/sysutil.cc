/*
** Lua binding: sysutil
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:30 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_sysutil_open (lua_State* tolua_S);

#include <math.h>
#include <stdlib.h>
#include "ocr-utils.h"
#include "sysutil.h"
using namespace ocropus;
using namespace colib;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Timer (lua_State* tolua_S)
{
 Timer* self = (Timer*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Timer");
}

/* function: system */
#ifndef TOLUA_DISABLE_tolua_sysutil_system00
static int tolua_sysutil_system00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* s = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  system(s);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'system'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: now */
#ifndef TOLUA_DISABLE_tolua_sysutil_now00
static int tolua_sysutil_now00(lua_State* tolua_S)
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
  double tolua_ret = (double)  now();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'now'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: user_time */
#ifndef TOLUA_DISABLE_tolua_sysutil_user_time00
static int tolua_sysutil_user_time00(lua_State* tolua_S)
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
  double tolua_ret = (double)  user_time();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'user_time'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: system_time */
#ifndef TOLUA_DISABLE_tolua_sysutil_system_time00
static int tolua_sysutil_system_time00(lua_State* tolua_S)
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
  double tolua_ret = (double)  system_time();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'system_time'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: heap_memory */
#ifndef TOLUA_DISABLE_tolua_sysutil_heap_memory00
static int tolua_sysutil_heap_memory00(lua_State* tolua_S)
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
  double tolua_ret = (double)  heap_memory();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'heap_memory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: stack_memory */
#ifndef TOLUA_DISABLE_tolua_sysutil_stack_memory00
static int tolua_sysutil_stack_memory00(lua_State* tolua_S)
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
  double tolua_ret = (double)  stack_memory();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stack_memory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: page_faults */
#ifndef TOLUA_DISABLE_tolua_sysutil_page_faults00
static int tolua_sysutil_page_faults00(lua_State* tolua_S)
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
  double tolua_ret = (double)  page_faults();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'page_faults'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_new00
static int tolua_sysutil_Timer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  Timer* tolua_ret = (Timer*)  Mtolua_new(Timer());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Timer");
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

/* method: new_local of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_new00_local
static int tolua_sysutil_Timer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  Timer* tolua_ret = (Timer*)  Mtolua_new(Timer());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"Timer");
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

/* method: reset of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_reset00
static int tolua_sysutil_Timer_reset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Timer* self = (Timer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reset'",NULL);
#endif
 try {
 {
  self->reset();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_start00
static int tolua_sysutil_Timer_start00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Timer* self = (Timer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start'",NULL);
#endif
 try {
 {
  self->start();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_stop00
static int tolua_sysutil_Timer_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Timer* self = (Timer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'",NULL);
#endif
 try {
 {
  self->stop();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sum of class  Timer */
#ifndef TOLUA_DISABLE_tolua_sysutil_Timer_sum00
static int tolua_sysutil_Timer_sum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Timer",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Timer* self = (Timer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sum'",NULL);
#endif
 try {
 {
  double tolua_ret = (double)  self->sum();
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

/* Open function */
TOLUA_API int tolua_sysutil_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 tolua_function(tolua_S,"system",tolua_sysutil_system00);
 tolua_function(tolua_S,"now",tolua_sysutil_now00);
 tolua_function(tolua_S,"user_time",tolua_sysutil_user_time00);
 tolua_function(tolua_S,"system_time",tolua_sysutil_system_time00);
 tolua_function(tolua_S,"heap_memory",tolua_sysutil_heap_memory00);
 tolua_function(tolua_S,"stack_memory",tolua_sysutil_stack_memory00);
 tolua_function(tolua_S,"page_faults",tolua_sysutil_page_faults00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"Timer","Timer","",tolua_collect_Timer);
 #else
 tolua_cclass(tolua_S,"Timer","Timer","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"Timer");
  tolua_function(tolua_S,"new",tolua_sysutil_Timer_new00);
  tolua_function(tolua_S,"new_local",tolua_sysutil_Timer_new00_local);
  tolua_function(tolua_S,".call",tolua_sysutil_Timer_new00_local);
  tolua_function(tolua_S,"reset",tolua_sysutil_Timer_reset00);
  tolua_function(tolua_S,"start",tolua_sysutil_Timer_start00);
  tolua_function(tolua_S,"stop",tolua_sysutil_Timer_stop00);
  tolua_function(tolua_S,"sum",tolua_sysutil_Timer_sum00);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_sysutil (lua_State* tolua_S) {
 return tolua_sysutil_open(tolua_S);
};
#endif

