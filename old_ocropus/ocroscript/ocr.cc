/*
** Lua binding: ocr
** Generated automatically by tolua++-1.0.92 on Mon Apr 12 16:55:44 2010.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int tolua_ocr_open (lua_State* tolua_S);

#include "math.h"
#include "colib.h"
#include "imgio.h"
#include "imglib.h"
#include "ocr-layout-rast.h"
//#include "layout-rules.h"
//#include "ocr-recognize-page.h"
#include "ocr-binarize-sauvola.h"
#include "ocr-doc-clean.h"
#include "ocr-deskew-rast.h"
#include "ocr-text-image-seg.h"
#include "langmod-aspell.h"
#include "langmod-shortest-path.h"
#include "segmentation.h"
#include "ocr-utils.h"
#include "ocr-segmentations.h"
#include "bpnet.h"
#include "mixtures.h"
#include "bpnetmixtures.h"
#include "ocrcomponents.h"
#include "ocr-util.h"
#include "regionextractor.h"
#include "pages.h"
#include "lines.h"
#include "grouper.h"
#include "grouping.h"
#include "charlib.h"
#include "recognized-page.h"
#include "narray-io.h"
#include "lattice.h"
#include "beam-search.h"
#include "classify-chars.h"
#include "didegrade.h"
#include "logger.h"
#include "idmap.h"
//#include "ocr-recognize-line.h"
//#include "ocr-recognize-page.h"
#ifdef HAVE_FST
#include "fstutil.h"
#include "fstbuilder.h"
#include "fstmodels.h"
#endif
using namespace ocropus;
using namespace colib;
using namespace imglib;
typedef narray<rectangle> rectanglearray;
 void str2array(bytearray &out,const char *s) {
     int n = strlen(s);
     out.resize(n);
     for(int i=0;i<n;i++) out[i] = s[i];
 }
 char *array2str(bytearray &buf) {
     char *result = (char*)malloc(buf.length()+1);
     for(int i=0;i<buf.length();i++) result[i] = buf[i];
     result[buf.length()] = 0;
     return result;
 }
#include "bpnetline.h"
#include "glinerec.h"
using namespace ocropus;
int hex(const char *s) { int v; sscanf(s,"%x",&v); return v; }
 const char *hardcoded_version_string();

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_RegionExtractor (lua_State* tolua_S)
{
 RegionExtractor* self = (RegionExtractor*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_idmap (lua_State* tolua_S)
{
 idmap* self = (idmap*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_point (lua_State* tolua_S)
{
 point* self = (point*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_ICharacterClassifier (lua_State* tolua_S)
{
 ICharacterClassifier* self = (ICharacterClassifier*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_IRecognizeLine (lua_State* tolua_S)
{
 IRecognizeLine* self = (IRecognizeLine*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_rectangle (lua_State* tolua_S)
{
 rectangle* self = (rectangle*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_Density (lua_State* tolua_S)
{
 Density* self = (Density*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_Logger (lua_State* tolua_S)
{
 Logger* self = (Logger*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_RecognizedPage (lua_State* tolua_S)
{
 RecognizedPage* self = (RecognizedPage*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_Classifier (lua_State* tolua_S)
{
 Classifier* self = (Classifier*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_IComponent (lua_State* tolua_S)
{
 IComponent* self = (IComponent*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_Pages (lua_State* tolua_S)
{
 Pages* self = (Pages*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}

static int tolua_collect_IDict (lua_State* tolua_S)
{
 IDict* self = (IDict*) tolua_tousertype(tolua_S,1,0);
 Mtolua_delete(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"idmap");
 tolua_usertype(tolua_S,"colib::bytearray");
 tolua_usertype(tolua_S,"ISegmentLine");
 tolua_usertype(tolua_S,"IRecognizeLine");
 tolua_usertype(tolua_S,"ISearchableFst");
 tolua_usertype(tolua_S,"IGrouper");
 tolua_usertype(tolua_S,"RegionExtractor");
 tolua_usertype(tolua_S,"IBinarize");
 tolua_usertype(tolua_S,"ICharacterClassifier");
 tolua_usertype(tolua_S,"ICharacterLibrary");
 tolua_usertype(tolua_S,"ICleanupGray");
 tolua_usertype(tolua_S,"byte");
 tolua_usertype(tolua_S,"ISegmentPage");
 tolua_usertype(tolua_S,"RecognizedPage");
 tolua_usertype(tolua_S,"IComponent");
 tolua_usertype(tolua_S,"point");
 tolua_usertype(tolua_S,"rectangle");
 tolua_usertype(tolua_S,"ICleanupBinary");
 tolua_usertype(tolua_S,"rectanglearray");
 tolua_usertype(tolua_S,"IBestPath");
 tolua_usertype(tolua_S,"Density");
 tolua_usertype(tolua_S,"ICharacter");
 tolua_usertype(tolua_S,"colib::intarray");
 tolua_usertype(tolua_S,"nustring");
 tolua_usertype(tolua_S,"Logger");
 tolua_usertype(tolua_S,"floatarray");
 tolua_usertype(tolua_S,"nuchar");
 tolua_usertype(tolua_S,"Classifier");
 tolua_usertype(tolua_S,"IDict");
 tolua_usertype(tolua_S,"FILE");
 tolua_usertype(tolua_S,"intarray");
 tolua_usertype(tolua_S,"Pages");
 tolua_usertype(tolua_S,"IGenericFst");
 tolua_usertype(tolua_S,"bytearray");
}

/* get function: x of class  point */
#ifndef TOLUA_DISABLE_tolua_get_point_x
static int tolua_get_point_x(lua_State* tolua_S)
{
  point* self = (point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  point */
#ifndef TOLUA_DISABLE_tolua_set_point_x
static int tolua_set_point_x(lua_State* tolua_S)
{
  point* self = (point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  point */
#ifndef TOLUA_DISABLE_tolua_get_point_y
static int tolua_get_point_y(lua_State* tolua_S)
{
  point* self = (point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  point */
#ifndef TOLUA_DISABLE_tolua_set_point_y
static int tolua_set_point_y(lua_State* tolua_S)
{
  point* self = (point*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  point */
#ifndef TOLUA_DISABLE_tolua_ocr_point_new00
static int tolua_ocr_point_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  point* tolua_ret = (point*)  Mtolua_new(point());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"point");
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

/* method: new_local of class  point */
#ifndef TOLUA_DISABLE_tolua_ocr_point_new00_local
static int tolua_ocr_point_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"point",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  point* tolua_ret = (point*)  Mtolua_new(point());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"point");
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

/* method: new of class  point */
#ifndef TOLUA_DISABLE_tolua_ocr_point_new01
static int tolua_ocr_point_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"point",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  point* tolua_ret = (point*)  Mtolua_new(point(x,y));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"point");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_point_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  point */
#ifndef TOLUA_DISABLE_tolua_ocr_point_new01_local
static int tolua_ocr_point_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"point",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  point* tolua_ret = (point*)  Mtolua_new(point(x,y));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"point");
 tolua_register_gc(tolua_S,lua_gettop(tolua_S));
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_point_new00_local(tolua_S);
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_new00
static int tolua_ocr_rectangle_new00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_new00_local
static int tolua_ocr_rectangle_new00_local(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_new01
static int tolua_ocr_rectangle_new01(lua_State* tolua_S)
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
 return tolua_ocr_rectangle_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_new01_local
static int tolua_ocr_rectangle_new01_local(lua_State* tolua_S)
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
 return tolua_ocr_rectangle_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: empty of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_empty00
static int tolua_ocr_rectangle_empty00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_width00
static int tolua_ocr_rectangle_width00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_height00
static int tolua_ocr_rectangle_height00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_include00
static int tolua_ocr_rectangle_include00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_contains00
static int tolua_ocr_rectangle_contains00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_intersect00
static int tolua_ocr_rectangle_intersect00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_include01
static int tolua_ocr_rectangle_include01(lua_State* tolua_S)
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
 return tolua_ocr_rectangle_include00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: intersection of class  rectangle */
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_intersection00
static int tolua_ocr_rectangle_intersection00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_inclusion00
static int tolua_ocr_rectangle_inclusion00(lua_State* tolua_S)
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
#ifndef TOLUA_DISABLE_tolua_ocr_rectangle_grow00
static int tolua_ocr_rectangle_grow00(lua_State* tolua_S)
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

/* function: make_line_segmentation_black */
#ifndef TOLUA_DISABLE_tolua_ocr_make_line_segmentation_black00
static int tolua_ocr_make_line_segmentation_black00(lua_State* tolua_S)
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
  make_line_segmentation_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_line_segmentation_black'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_line_segmentation_white */
#ifndef TOLUA_DISABLE_tolua_ocr_make_line_segmentation_white00
static int tolua_ocr_make_line_segmentation_white00(lua_State* tolua_S)
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
  make_line_segmentation_white(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_line_segmentation_white'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_segmentation_black */
#ifndef TOLUA_DISABLE_tolua_ocr_make_page_segmentation_black00
static int tolua_ocr_make_page_segmentation_black00(lua_State* tolua_S)
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
  make_page_segmentation_black(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_page_segmentation_black'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_page_segmentation_white */
#ifndef TOLUA_DISABLE_tolua_ocr_make_page_segmentation_white00
static int tolua_ocr_make_page_segmentation_white00(lua_State* tolua_S)
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
  make_page_segmentation_white(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_page_segmentation_white'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_new00
static int tolua_ocr_idmap_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"idmap",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  idmap* tolua_ret = (idmap*)  Mtolua_new(idmap());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"idmap");
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

/* method: new_local of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_new00_local
static int tolua_ocr_idmap_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"idmap",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  idmap* tolua_ret = (idmap*)  Mtolua_new(idmap());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"idmap");
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

/* method: segments_of_id of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_segments_of_id00
static int tolua_ocr_idmap_segments_of_id00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"idmap",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  idmap* self = (idmap*)  tolua_tousertype(tolua_S,1,0);
  intarray* result = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int id = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'segments_of_id'",NULL);
#endif
 try {
 {
  self->segments_of_id(*result,id);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'segments_of_id'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ids_of_segment of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_ids_of_segment00
static int tolua_ocr_idmap_ids_of_segment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"idmap",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  idmap* self = (idmap*)  tolua_tousertype(tolua_S,1,0);
  intarray* result = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int segment = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ids_of_segment'",NULL);
#endif
 try {
 {
  self->ids_of_segment(*result,segment);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ids_of_segment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: associate of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_associate00
static int tolua_ocr_idmap_associate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"idmap",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  idmap* self = (idmap*)  tolua_tousertype(tolua_S,1,0);
  int id = ((int)  tolua_tonumber(tolua_S,2,0));
  int segment = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'associate'",NULL);
#endif
 try {
 {
  self->associate(id,segment);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'associate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  idmap */
#ifndef TOLUA_DISABLE_tolua_ocr_idmap_clear00
static int tolua_ocr_idmap_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"idmap",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  idmap* self = (idmap*)  tolua_tousertype(tolua_S,1,0);
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

/* method: delete of class  IComponent */
#ifndef TOLUA_DISABLE_tolua_ocr_IComponent_delete00
static int tolua_ocr_IComponent_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IComponent",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IComponent* self = (IComponent*)  tolua_tousertype(tolua_S,1,0);
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

/* method: description of class  IComponent */
#ifndef TOLUA_DISABLE_tolua_ocr_IComponent_description00
static int tolua_ocr_IComponent_description00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IComponent",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IComponent* self = (IComponent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'description'",NULL);
#endif
 try {
 {
  const char* tolua_ret = (const char*)  self->description();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'description'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  IComponent */
#ifndef TOLUA_DISABLE_tolua_ocr_IComponent_set00
static int tolua_ocr_IComponent_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IComponent",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IComponent* self = (IComponent*)  tolua_tousertype(tolua_S,1,0);
  const char* tolua_var_1 = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* tolua_var_2 = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 try {
 {
  self->set(tolua_var_1,tolua_var_2);
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

/* method: set of class  IComponent */
#ifndef TOLUA_DISABLE_tolua_ocr_IComponent_set01
static int tolua_ocr_IComponent_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IComponent",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IComponent* self = (IComponent*)  tolua_tousertype(tolua_S,1,0);
  const char* tolua_var_3 = ((const char*)  tolua_tostring(tolua_S,2,0));
  double tolua_var_4 = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 try {
 {
  self->set(tolua_var_3,tolua_var_4);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IComponent_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanup of class  ICleanupGray */
#ifndef TOLUA_DISABLE_tolua_ocr_ICleanupGray_cleanup00
static int tolua_ocr_ICleanupGray_cleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICleanupGray",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICleanupGray* self = (ICleanupGray*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanup'",NULL);
#endif
 try {
 {
  self->cleanup(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanup of class  ICleanupBinary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICleanupBinary_cleanup00
static int tolua_ocr_ICleanupBinary_cleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICleanupBinary",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICleanupBinary* self = (ICleanupBinary*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanup'",NULL);
#endif
 try {
 {
  self->cleanup(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: segment of class  ISegmentPage */
#ifndef TOLUA_DISABLE_tolua_ocr_ISegmentPage_segment00
static int tolua_ocr_ISegmentPage_segment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ISegmentPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ISegmentPage* self = (ISegmentPage*)  tolua_tousertype(tolua_S,1,0);
  intarray* out = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'segment'",NULL);
#endif
 try {
 {
  self->segment(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'segment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: charseg of class  ISegmentLine */
#ifndef TOLUA_DISABLE_tolua_ocr_ISegmentLine_charseg00
static int tolua_ocr_ISegmentLine_charseg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ISegmentLine",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ISegmentLine* self = (ISegmentLine*)  tolua_tousertype(tolua_S,1,0);
  intarray* out = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'charseg'",NULL);
#endif
 try {
 {
  self->charseg(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'charseg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: binarize of class  IBinarize */
#ifndef TOLUA_DISABLE_tolua_ocr_IBinarize_binarize00
static int tolua_ocr_IBinarize_binarize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IBinarize",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IBinarize* self = (IBinarize*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* in = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'binarize'",NULL);
#endif
 try {
 {
  self->binarize(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'binarize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: binarize of class  IBinarize */
#ifndef TOLUA_DISABLE_tolua_ocr_IBinarize_binarize01
static int tolua_ocr_IBinarize_binarize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IBinarize",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IBinarize* self = (IBinarize*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'binarize'",NULL);
#endif
 try {
 {
  self->binarize(*out,*in);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IBinarize_binarize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_clear00
static int tolua_ocr_IGenericFst_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
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

/* method: newState of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_newState00
static int tolua_ocr_IGenericFst_newState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'newState'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->newState();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'newState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTransition of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_addTransition00
static int tolua_ocr_IGenericFst_addTransition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
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
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  int from = ((int)  tolua_tonumber(tolua_S,2,0));
  int to = ((int)  tolua_tonumber(tolua_S,3,0));
  int output = ((int)  tolua_tonumber(tolua_S,4,0));
  float cost = ((float)  tolua_tonumber(tolua_S,5,0));
  int input = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTransition'",NULL);
#endif
 try {
 {
  self->addTransition(from,to,output,cost,input);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTransition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStart of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_setStart00
static int tolua_ocr_IGenericFst_setStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  int node = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStart'",NULL);
#endif
 try {
 {
  self->setStart(node);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAccept of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_setAccept00
static int tolua_ocr_IGenericFst_setAccept00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  int node = ((int)  tolua_tonumber(tolua_S,2,0));
  float f = ((float)  tolua_tonumber(tolua_S,3,0.0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAccept'",NULL);
#endif
 try {
 {
  self->setAccept(node,f);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAccept'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: special of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_special00
static int tolua_ocr_IGenericFst_special00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'special'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->special(s);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'special'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bestpath of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_bestpath00
static int tolua_ocr_IGenericFst_bestpath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  nustring* result = ((nustring*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bestpath'",NULL);
#endif
 try {
 {
  self->bestpath(*result);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bestpath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_setString00
static int tolua_ocr_IGenericFst_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  nustring* result = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  floatarray* costs = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
  intarray* ids = ((intarray*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'",NULL);
#endif
 try {
 {
  self->setString(*result,*costs,*ids);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nStates of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_nStates00
static int tolua_ocr_IGenericFst_nStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nStates'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->nStates();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStart of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_getStart00
static int tolua_ocr_IGenericFst_getStart00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStart'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->getStart();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStart'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAcceptCost of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_getAcceptCost00
static int tolua_ocr_IGenericFst_getAcceptCost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  int node = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAcceptCost'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->getAcceptCost(node);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAcceptCost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: arcs of class  IGenericFst */
#ifndef TOLUA_DISABLE_tolua_ocr_IGenericFst_arcs00
static int tolua_ocr_IGenericFst_arcs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGenericFst",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGenericFst* self = (IGenericFst*)  tolua_tousertype(tolua_S,1,0);
  intarray* ids = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  intarray* targets = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  intarray* outputs = ((intarray*)  tolua_tousertype(tolua_S,4,0));
  floatarray* costs = ((floatarray*)  tolua_tousertype(tolua_S,5,0));
  int from = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'arcs'",NULL);
#endif
 try {
 {
  self->arcs(*ids,*targets,*outputs,*costs,from);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'arcs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_set00
static int tolua_ocr_ICharacterClassifier_set00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  bytearray* input_image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 try {
 {
  self->set(*input_image);
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

/* method: set of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_set01
static int tolua_ocr_ICharacterClassifier_set01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
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
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int base_y = ((int)  tolua_tonumber(tolua_S,3,0));
  int xheight_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int descender_y = ((int)  tolua_tonumber(tolua_S,5,0));
  int ascender_y = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set'",NULL);
#endif
 try {
 {
  self->set(*image,base_y,xheight_y,descender_y,ascender_y);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_ICharacterClassifier_set00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_length00
static int tolua_ocr_ICharacterClassifier_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
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

/* method: cls of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_cls00
static int tolua_ocr_ICharacterClassifier_cls00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  nustring* result = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  int i = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cls'",NULL);
#endif
 try {
 {
  self->cls(*result,i);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cls'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cost of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_cost00
static int tolua_ocr_ICharacterClassifier_cost00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cost'",NULL);
#endif
 try {
 {
  float tolua_ret = (float)  self->cost(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cost'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startTraining of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_startTraining00
static int tolua_ocr_ICharacterClassifier_startTraining00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  const char* type = ((const char*)  tolua_tostring(tolua_S,2,"adaptation"));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startTraining'",NULL);
#endif
 try {
 {
  self->startTraining(type);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startTraining'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTrainingChar of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_addTrainingChar00
static int tolua_ocr_ICharacterClassifier_addTrainingChar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  bytearray* input_image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  nustring* characters = ((nustring*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTrainingChar'",NULL);
#endif
 try {
 {
  self->addTrainingChar(*input_image,*characters);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTrainingChar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTrainingChar of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_addTrainingChar01
static int tolua_ocr_ICharacterClassifier_addTrainingChar01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,7,&tolua_err) || !tolua_isusertype(tolua_S,7,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int base_y = ((int)  tolua_tonumber(tolua_S,3,0));
  int xheight_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int descender_y = ((int)  tolua_tonumber(tolua_S,5,0));
  int ascender_y = ((int)  tolua_tonumber(tolua_S,6,0));
  nustring* characters = ((nustring*)  tolua_tousertype(tolua_S,7,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTrainingChar'",NULL);
#endif
 try {
 {
  self->addTrainingChar(*image,base_y,xheight_y,descender_y,ascender_y,*characters);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_ICharacterClassifier_addTrainingChar00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTrainingChar of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_addTrainingChar02
static int tolua_ocr_ICharacterClassifier_addTrainingChar02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  nustring* characters = ((nustring*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTrainingChar'",NULL);
#endif
 try {
 {
  self->addTrainingChar(*image,*mask,*characters);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_ICharacterClassifier_addTrainingChar01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: finishTraining of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_finishTraining00
static int tolua_ocr_ICharacterClassifier_finishTraining00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finishTraining'",NULL);
#endif
 try {
 {
  self->finishTraining();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finishTraining'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_save00
static int tolua_ocr_ICharacterClassifier_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_save01
static int tolua_ocr_ICharacterClassifier_save01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_ICharacterClassifier_save00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_load00
static int tolua_ocr_ICharacterClassifier_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_load01
static int tolua_ocr_ICharacterClassifier_load01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_ICharacterClassifier_load00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: best of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_best00
static int tolua_ocr_ICharacterClassifier_best00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
  nustring* result = ((nustring*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'best'",NULL);
#endif
 try {
 {
  self->best(*result);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'best'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterClassifier_delete00
static int tolua_ocr_ICharacterClassifier_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* self = (ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0);
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

/* method: recognizeLine of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_recognizeLine00
static int tolua_ocr_IRecognizeLine_recognizeLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"IGenericFst",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  IGenericFst* result = ((IGenericFst*)  tolua_tousertype(tolua_S,2,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recognizeLine'",NULL);
#endif
 try {
 {
  self->recognizeLine(*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recognizeLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: startTraining of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_startTraining00
static int tolua_ocr_IRecognizeLine_startTraining00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  const char* type = ((const char*)  tolua_tostring(tolua_S,2,"adaptation"));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'startTraining'",NULL);
#endif
 try {
 {
  self->startTraining(type);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'startTraining'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTrainingLine of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_addTrainingLine00
static int tolua_ocr_IRecognizeLine_addTrainingLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  nustring* transcription = ((nustring*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTrainingLine'",NULL);
#endif
 try {
 {
  self->addTrainingLine(*image,*transcription);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTrainingLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: finishTraining of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_finishTraining00
static int tolua_ocr_IRecognizeLine_finishTraining00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'finishTraining'",NULL);
#endif
 try {
 {
  self->finishTraining();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'finishTraining'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_save00
static int tolua_ocr_IRecognizeLine_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_load00
static int tolua_ocr_IRecognizeLine_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_delete00
static int tolua_ocr_IRecognizeLine_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
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

/* method: recognizeLine of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_recognizeLine01
static int tolua_ocr_IRecognizeLine_recognizeLine01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"IGenericFst",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  intarray* segmentation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  IGenericFst* result = ((IGenericFst*)  tolua_tousertype(tolua_S,3,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recognizeLine'",NULL);
#endif
 try {
 {
  self->recognizeLine(*segmentation,*result,*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IRecognizeLine_recognizeLine00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: align of class  IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_IRecognizeLine_align00
static int tolua_ocr_IRecognizeLine_align00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"IGenericFst",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* self = (IRecognizeLine*)  tolua_tousertype(tolua_S,1,0);
  nustring* chars = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  intarray* result = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  floatarray* costs = ((floatarray*)  tolua_tousertype(tolua_S,4,0));
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,5,0));
  IGenericFst* transcription = ((IGenericFst*)  tolua_tousertype(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'align'",NULL);
#endif
 try {
 {
  self->align(*chars,*result,*costs,*image,*transcription);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'align'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bestpath of class  IBestPath */
#ifndef TOLUA_DISABLE_tolua_ocr_IBestPath_bestpath00
static int tolua_ocr_IBestPath_bestpath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IBestPath",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IBestPath* self = (IBestPath*)  tolua_tousertype(tolua_S,1,0);
  nustring* result = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  floatarray* costs = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
  intarray* ids = ((intarray*)  tolua_tousertype(tolua_S,4,0));
  intarray* states = ((intarray*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bestpath'",NULL);
#endif
 try {
 {
  self->bestpath(*result,*costs,*ids,*states);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bestpath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __IBestPath__ of class  ISearchableFst */
#ifndef TOLUA_DISABLE_tolua_get_ISearchableFst___IBestPath__
static int tolua_get_ISearchableFst___IBestPath__(lua_State* tolua_S)
{
  ISearchableFst* self = (ISearchableFst*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__IBestPath__'",NULL);
#endif
#ifdef __cplusplus
  tolua_pushusertype(tolua_S,(void*)static_cast<IBestPath*>(self), "IBestPath");
#else
  tolua_pushusertype(tolua_S,(void*)((IBestPath*)self), "IBestPath");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_ShortestPathSearchableFst */
#ifndef TOLUA_DISABLE_tolua_ocr_make_ShortestPathSearchableFst00
static int tolua_ocr_make_ShortestPathSearchableFst00(lua_State* tolua_S)
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
  ISearchableFst* tolua_ret = (ISearchableFst*)  make_ShortestPathSearchableFst();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISearchableFst");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_ShortestPathSearchableFst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lookup of class  IDict */
#ifndef TOLUA_DISABLE_tolua_ocr_IDict_lookup00
static int tolua_ocr_IDict_lookup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IDict",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IDict* self = (IDict*)  tolua_tousertype(tolua_S,1,0);
  nustring* correction = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  nustring* word = ((nustring*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lookup'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->lookup(*correction,*word);
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lookup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  IDict */
#ifndef TOLUA_DISABLE_tolua_ocr_IDict_delete00
static int tolua_ocr_IDict_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IDict",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IDict* self = (IDict*)  tolua_tousertype(tolua_S,1,0);
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

/* function: make_WordList */
#ifndef TOLUA_DISABLE_tolua_ocr_make_WordList00
static int tolua_ocr_make_WordList00(lua_State* tolua_S)
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
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  IDict* tolua_ret = (IDict*)  make_WordList(path);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IDict");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_WordList'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_Aspell */
#ifndef TOLUA_DISABLE_tolua_ocr_make_Aspell00
static int tolua_ocr_make_Aspell00(lua_State* tolua_S)
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
  IDict* tolua_ret = (IDict*)  make_Aspell();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IDict");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_Aspell'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_DictBestPath */
#ifndef TOLUA_DISABLE_tolua_ocr_make_DictBestPath00
static int tolua_ocr_make_DictBestPath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IBestPath",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"IDict",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IBestPath* l = ((IBestPath*)  tolua_tousertype(tolua_S,1,0));
  IDict* d = ((IDict*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  IBestPath* tolua_ret = (IBestPath*)  make_DictBestPath(l,d);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IBestPath");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_DictBestPath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: binarize_by_range */
#ifndef TOLUA_DISABLE_tolua_ocr_binarize_by_range00
static int tolua_ocr_binarize_by_range00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  float fraction = ((float)  tolua_tonumber(tolua_S,2,0.5));
 try {
 {
  binarize_by_range(*image,fraction);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'binarize_by_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: binarize_by_range */
#ifndef TOLUA_DISABLE_tolua_ocr_binarize_by_range01
static int tolua_ocr_binarize_by_range01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  floatarray* in = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  float fraction = ((float)  tolua_tonumber(tolua_S,3,0.5));
 try {
 {
  binarize_by_range(*out,*in,fraction);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_binarize_by_range00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_BinarizeBySauvola */
#ifndef TOLUA_DISABLE_tolua_ocr_make_BinarizeBySauvola00
static int tolua_ocr_make_BinarizeBySauvola00(lua_State* tolua_S)
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
  IBinarize* tolua_ret = (IBinarize*)  make_BinarizeBySauvola();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IBinarize");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_BinarizeBySauvola'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_BinarizeByRange */
#ifndef TOLUA_DISABLE_tolua_ocr_make_BinarizeByRange00
static int tolua_ocr_make_BinarizeByRange00(lua_State* tolua_S)
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
  IBinarize* tolua_ret = (IBinarize*)  make_BinarizeByRange();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IBinarize");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_BinarizeByRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_DeskewPageByRAST */
#ifndef TOLUA_DISABLE_tolua_ocr_make_DeskewPageByRAST00
static int tolua_ocr_make_DeskewPageByRAST00(lua_State* tolua_S)
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
  ICleanupBinary* tolua_ret = (ICleanupBinary*)  make_DeskewPageByRAST();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICleanupBinary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_DeskewPageByRAST'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_TextImageSeg */
#ifndef TOLUA_DISABLE_tolua_ocr_make_TextImageSeg00
static int tolua_ocr_make_TextImageSeg00(lua_State* tolua_S)
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
  ICleanupBinary* tolua_ret = (ICleanupBinary*)  make_TextImageSeg();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICleanupBinary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_TextImageSeg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_DocClean */
#ifndef TOLUA_DISABLE_tolua_ocr_make_DocClean00
static int tolua_ocr_make_DocClean00(lua_State* tolua_S)
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
  ICleanupBinary* tolua_ret = (ICleanupBinary*)  make_DocClean();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICleanupBinary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_DocClean'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentPageBySmear */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentPageBySmear00
static int tolua_ocr_make_SegmentPageBySmear00(lua_State* tolua_S)
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
  ISegmentPage* tolua_ret = (ISegmentPage*)  make_SegmentPageBySmear();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentPage");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentPageBySmear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentPageBy1CP */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentPageBy1CP00
static int tolua_ocr_make_SegmentPageBy1CP00(lua_State* tolua_S)
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
  ISegmentPage* tolua_ret = (ISegmentPage*)  make_SegmentPageBy1CP();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentPage");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentPageBy1CP'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentPageByRAST */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentPageByRAST00
static int tolua_ocr_make_SegmentPageByRAST00(lua_State* tolua_S)
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
  ISegmentPage* tolua_ret = (ISegmentPage*)  make_SegmentPageByRAST();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentPage");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentPageByRAST'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentLineByProjection */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentLineByProjection00
static int tolua_ocr_make_SegmentLineByProjection00(lua_State* tolua_S)
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
  ISegmentLine* tolua_ret = (ISegmentLine*)  make_SegmentLineByProjection();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentLineByProjection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentLineByCCS */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentLineByCCS00
static int tolua_ocr_make_SegmentLineByCCS00(lua_State* tolua_S)
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
  ISegmentLine* tolua_ret = (ISegmentLine*)  make_SegmentLineByCCS();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentLineByCCS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_ConnectedComponentSegmenter */
#ifndef TOLUA_DISABLE_tolua_ocr_make_ConnectedComponentSegmenter00
static int tolua_ocr_make_ConnectedComponentSegmenter00(lua_State* tolua_S)
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
  ISegmentLine* tolua_ret = (ISegmentLine*)  make_ConnectedComponentSegmenter();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_ConnectedComponentSegmenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_CurvedCutSegmenter */
#ifndef TOLUA_DISABLE_tolua_ocr_make_CurvedCutSegmenter00
static int tolua_ocr_make_CurvedCutSegmenter00(lua_State* tolua_S)
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
  ISegmentLine* tolua_ret = (ISegmentLine*)  make_CurvedCutSegmenter();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_CurvedCutSegmenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SkelSegmenter */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SkelSegmenter00
static int tolua_ocr_make_SkelSegmenter00(lua_State* tolua_S)
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
  ISegmentLine* tolua_ret = (ISegmentLine*)  make_SkelSegmenter();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ISegmentLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SkelSegmenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_new00
static int tolua_ocr_RegionExtractor_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RegionExtractor* tolua_ret = (RegionExtractor*)  Mtolua_new(RegionExtractor());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"RegionExtractor");
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

/* method: new_local of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_new00_local
static int tolua_ocr_RegionExtractor_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RegionExtractor* tolua_ret = (RegionExtractor*)  Mtolua_new(RegionExtractor());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"RegionExtractor");
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

/* method: setImage of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_setImage00
static int tolua_ocr_RegionExtractor_setImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImage'",NULL);
#endif
 try {
 {
  self->setImage(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setImageMasked of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_setImageMasked00
static int tolua_ocr_RegionExtractor_setImageMasked00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int mask = ((int)  tolua_tonumber(tolua_S,3,0xffffff));
  int lo = ((int)  tolua_tonumber(tolua_S,4,1));
  int hi = ((int)  tolua_tonumber(tolua_S,5,999999999));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setImageMasked'",NULL);
#endif
 try {
 {
  self->setImageMasked(*image,mask,lo,hi);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setImageMasked'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPageColumns of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_setPageColumns00
static int tolua_ocr_RegionExtractor_setPageColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPageColumns'",NULL);
#endif
 try {
 {
  self->setPageColumns(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPageColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPageParagraphs of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_setPageParagraphs00
static int tolua_ocr_RegionExtractor_setPageParagraphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPageParagraphs'",NULL);
#endif
 try {
 {
  self->setPageParagraphs(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPageParagraphs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPageLines of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_setPageLines00
static int tolua_ocr_RegionExtractor_setPageLines00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPageLines'",NULL);
#endif
 try {
 {
  self->setPageLines(*image);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPageLines'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_length00
static int tolua_ocr_RegionExtractor_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
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

/* method: bbox of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_bbox00
static int tolua_ocr_RegionExtractor_bbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bbox'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->bbox(i);
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
 tolua_error(tolua_S,"#ferror in function 'bbox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bounds of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_bounds00
static int tolua_ocr_RegionExtractor_bounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,4,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,5,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bounds'",NULL);
#endif
 try {
 {
  self->bounds(i,&x0,&y0,&x1,&y1);
 tolua_pushnumber(tolua_S,(lua_Number)x0);
 tolua_pushnumber(tolua_S,(lua_Number)y0);
 tolua_pushnumber(tolua_S,(lua_Number)x1);
 tolua_pushnumber(tolua_S,(lua_Number)y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: x0 of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_x000
static int tolua_ocr_RegionExtractor_x000(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'x0'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->x0(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'x0'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: y0 of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_y000
static int tolua_ocr_RegionExtractor_y000(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'y0'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->y0(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'y0'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: x1 of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_x100
static int tolua_ocr_RegionExtractor_x100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'x1'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->x1(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'x1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: y1 of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_y100
static int tolua_ocr_RegionExtractor_y100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'y1'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->y1(i);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'y1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract00
static int tolua_ocr_RegionExtractor_extract00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  bytearray* output = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* input = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extract'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract01
static int tolua_ocr_RegionExtractor_extract01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* output = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* input = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_extract00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract02
static int tolua_ocr_RegionExtractor_extract02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* output = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  intarray* input = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_extract01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract03
static int tolua_ocr_RegionExtractor_extract03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  floatarray* output = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* input = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_extract02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract04
static int tolua_ocr_RegionExtractor_extract04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  floatarray* output = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* input = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_extract03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_extract05
static int tolua_ocr_RegionExtractor_extract05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  floatarray* output = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  intarray* input = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*output,*input,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_extract04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: mask of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_mask00
static int tolua_ocr_RegionExtractor_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  bytearray* output = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
  int margin = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mask'",NULL);
#endif
 try {
 {
  self->mask(*output,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: mask of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_mask01
static int tolua_ocr_RegionExtractor_mask01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  intarray* output = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
  int margin = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mask'",NULL);
#endif
 try {
 {
  self->mask(*output,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_mask00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: mask of class  RegionExtractor */
#ifndef TOLUA_DISABLE_tolua_ocr_RegionExtractor_mask02
static int tolua_ocr_RegionExtractor_mask02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RegionExtractor",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  RegionExtractor* self = (RegionExtractor*)  tolua_tousertype(tolua_S,1,0);
  floatarray* output = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
  int margin = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'mask'",NULL);
#endif
 try {
 {
  self->mask(*output,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_RegionExtractor_mask01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: debug_array */
#ifndef TOLUA_DISABLE_tolua_ocr_debug_array00
static int tolua_ocr_debug_array00(lua_State* tolua_S)
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
  bytearray* tolua_var_5 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  debug_array(*tolua_var_5);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'debug_array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: debug_array */
#ifndef TOLUA_DISABLE_tolua_ocr_debug_array01
static int tolua_ocr_debug_array01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  intarray* tolua_var_6 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  debug_array(*tolua_var_6);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_debug_array00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: debug_array */
#ifndef TOLUA_DISABLE_tolua_ocr_debug_array02
static int tolua_ocr_debug_array02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  floatarray* tolua_var_7 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  debug_array(*tolua_var_7);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_debug_array01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_line_segmentation */
#ifndef TOLUA_DISABLE_tolua_ocr_check_line_segmentation00
static int tolua_ocr_check_line_segmentation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
 !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* cseg = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bool allow_zero = ((bool)  tolua_toboolean(tolua_S,2,true));
  bool allow_gaps = ((bool)  tolua_toboolean(tolua_S,3,false));
  bool allow_lzero = ((bool)  tolua_toboolean(tolua_S,4,true));
 try {
 {
  check_line_segmentation(*cseg,allow_zero,allow_gaps,allow_lzero);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'check_line_segmentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: check_page_segmentation */
#ifndef TOLUA_DISABLE_tolua_ocr_check_page_segmentation00
static int tolua_ocr_check_page_segmentation00(lua_State* tolua_S)
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
  intarray* cseg = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bool allow_zero = ((bool)  tolua_toboolean(tolua_S,2,true));
 try {
 {
  check_page_segmentation(*cseg,allow_zero);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'check_page_segmentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: sort_by_xcenter */
#ifndef TOLUA_DISABLE_tolua_ocr_sort_by_xcenter00
static int tolua_ocr_sort_by_xcenter00(lua_State* tolua_S)
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
  intarray* tolua_var_8 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  sort_by_xcenter(*tolua_var_8);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sort_by_xcenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxrange of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_get_IGrouper_maxrange
static int tolua_get_IGrouper_maxrange(lua_State* tolua_S)
{
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxrange'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->maxrange);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxrange of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_set_IGrouper_maxrange
static int tolua_set_IGrouper_maxrange(lua_State* tolua_S)
{
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxrange'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxrange = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: maxdist of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_get_IGrouper_maxdist
static int tolua_get_IGrouper_maxdist(lua_State* tolua_S)
{
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxdist'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->maxdist);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: maxdist of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_set_IGrouper_maxdist
static int tolua_set_IGrouper_maxdist(lua_State* tolua_S)
{
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'maxdist'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->maxdist = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSegmentation of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_setSegmentation00
static int tolua_ocr_IGrouper_setSegmentation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  intarray* segmentation = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSegmentation'",NULL);
#endif
 try {
 {
  self->setSegmentation(*segmentation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSegmentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_length00
static int tolua_ocr_IGrouper_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getMask of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_getMask00
static int tolua_ocr_IGrouper_getMask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  rectangle* r = ((rectangle*)  tolua_tousertype(tolua_S,2,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  int index = ((int)  tolua_tonumber(tolua_S,4,0));
  int margin = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMask'",NULL);
#endif
 try {
 {
  self->getMask(*r,*mask,index,margin);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: boundingBox of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_boundingBox00
static int tolua_ocr_IGrouper_boundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'boundingBox'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->boundingBox(index);
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
 tolua_error(tolua_S,"#ferror in function 'boundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_extract00
static int tolua_ocr_IGrouper_extract00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  bytearray* source = ((bytearray*)  tolua_tousertype(tolua_S,4,0));
  int index = ((int)  tolua_tonumber(tolua_S,5,0));
  int grow = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*out,*mask,*source,index,grow);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extract'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_extract01
static int tolua_ocr_IGrouper_extract01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* mask = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  floatarray* source = ((floatarray*)  tolua_tousertype(tolua_S,4,0));
  int index = ((int)  tolua_tonumber(tolua_S,5,0));
  int grow = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*out,*mask,*source,index,grow);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IGrouper_extract00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_extract02
static int tolua_ocr_IGrouper_extract02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"byte",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
  bytearray* source = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  byte dflt = *((byte*)  tolua_tousertype(tolua_S,4,0));
  int index = ((int)  tolua_tonumber(tolua_S,5,0));
  int grow = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*out,*source,dflt,index,grow);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IGrouper_extract01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: extract of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_extract03
static int tolua_ocr_IGrouper_extract03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  floatarray* out = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* source = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
  float dflt = ((float)  tolua_tonumber(tolua_S,4,0));
  int index = ((int)  tolua_tonumber(tolua_S,5,0));
  int grow = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'extract'",NULL);
#endif
 try {
 {
  self->extract(*out,*source,dflt,index,grow);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_IGrouper_extract02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setClass of class  IGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_IGrouper_setClass00
static int tolua_ocr_IGrouper_setClass00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"IGrouper",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IGrouper* self = (IGrouper*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  int cls = ((int)  tolua_tonumber(tolua_S,3,0));
  float cost = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setClass'",NULL);
#endif
 try {
 {
  self->setClass(index,cls,cost);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setClass'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_StandardGrouper */
#ifndef TOLUA_DISABLE_tolua_ocr_make_StandardGrouper00
static int tolua_ocr_make_StandardGrouper00(lua_State* tolua_S)
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
  IGrouper* tolua_ret = (IGrouper*)  make_StandardGrouper();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IGrouper");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_StandardGrouper'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_new00
static int tolua_ocr_Pages_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  Pages* tolua_ret = (Pages*)  Mtolua_new(Pages());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Pages");
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

/* method: new_local of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_new00_local
static int tolua_ocr_Pages_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  Pages* tolua_ret = (Pages*)  Mtolua_new(Pages());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"Pages");
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

/* method: clear of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_clear00
static int tolua_ocr_Pages_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
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

/* method: addFile of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_addFile00
static int tolua_ocr_Pages_addFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addFile'",NULL);
#endif
 try {
 {
  self->addFile(file);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parseSpec of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_parseSpec00
static int tolua_ocr_Pages_parseSpec00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  const char* spec = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parseSpec'",NULL);
#endif
 try {
 {
  self->parseSpec(spec);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parseSpec'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: wantGray of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_wantGray00
static int tolua_ocr_Pages_wantGray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'wantGray'",NULL);
#endif
 try {
 {
  self->wantGray(flag);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'wantGray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: wantColor of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_wantColor00
static int tolua_ocr_Pages_wantColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'wantColor'",NULL);
#endif
 try {
 {
  self->wantColor(flag);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'wantColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoInvert of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_setAutoInvert00
static int tolua_ocr_Pages_setAutoInvert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  bool flag = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoInvert'",NULL);
#endif
 try {
 {
  self->setAutoInvert(flag);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoInvert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBinarizer of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_setBinarizer00
static int tolua_ocr_Pages_setBinarizer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"IBinarize",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  IBinarize* arg = ((IBinarize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBinarizer'",NULL);
#endif
 try {
 {
  self->setBinarizer(arg);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBinarizer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_length00
static int tolua_ocr_Pages_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
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

/* method: getPage of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_getPage00
static int tolua_ocr_Pages_getPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPage'",NULL);
#endif
 try {
 {
  self->getPage(index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nextPage of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_nextPage00
static int tolua_ocr_Pages_nextPage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nextPage'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->nextPage();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nextPage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rewind of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_rewind00
static int tolua_ocr_Pages_rewind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rewind'",NULL);
#endif
 try {
 {
  self->rewind();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rewind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadImage of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_loadImage00
static int tolua_ocr_Pages_loadImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadImage'",NULL);
#endif
 try {
 {
  self->loadImage();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFileName of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_getFileName00
static int tolua_ocr_Pages_getFileName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFileName'",NULL);
#endif
 try {
 {
  const char* tolua_ret = (const char*)  self->getFileName();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFileName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasGray of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_hasGray00
static int tolua_ocr_Pages_hasGray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasGray'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->hasGray();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasGray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasColor of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_hasColor00
static int tolua_ocr_Pages_hasColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasColor'",NULL);
#endif
 try {
 {
  bool tolua_ret = (bool)  self->hasColor();
 tolua_pushboolean(tolua_S,(bool)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBinary of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_getBinary00
static int tolua_ocr_Pages_getBinary00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  bytearray* dst = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBinary'",NULL);
#endif
 try {
 {
  self->getBinary(*dst);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBinary'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGray of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_getGray00
static int tolua_ocr_Pages_getGray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  bytearray* dst = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGray'",NULL);
#endif
 try {
 {
  self->getGray(*dst);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  Pages */
#ifndef TOLUA_DISABLE_tolua_ocr_Pages_getColor00
static int tolua_ocr_Pages_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Pages",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Pages* self = (Pages*)  tolua_tousertype(tolua_S,1,0);
  intarray* dst = ((intarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'",NULL);
#endif
 try {
 {
  self->getColor(*dst);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_new00
static int tolua_ocr_RecognizedPage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RecognizedPage* tolua_ret = (RecognizedPage*)  Mtolua_new(RecognizedPage());
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"RecognizedPage");
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

/* method: new_local of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_new00_local
static int tolua_ocr_RecognizedPage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
try {
 {
  RecognizedPage* tolua_ret = (RecognizedPage*)  Mtolua_new(RecognizedPage());
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"RecognizedPage");
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

/* method: delete of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_delete00
static int tolua_ocr_RecognizedPage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setLinesCount of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setLinesCount00
static int tolua_ocr_RecognizedPage_setLinesCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setLinesCount'",NULL);
#endif
 try {
 {
  self->setLinesCount(n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setLinesCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: linesCount of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_linesCount00
static int tolua_ocr_RecognizedPage_linesCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'linesCount'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->linesCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'linesCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setText of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setText00
static int tolua_ocr_RecognizedPage_setText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  nustring* s = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setText'",NULL);
#endif
 try {
 {
  self->setText(*s,index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: text of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_text00
static int tolua_ocr_RecognizedPage_text00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"nustring",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  nustring* s = ((nustring*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'text'",NULL);
#endif
 try {
 {
  self->text(*s,index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCosts of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setCosts00
static int tolua_ocr_RecognizedPage_setCosts00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  floatarray* c = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCosts'",NULL);
#endif
 try {
 {
  self->setCosts(*c,index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCosts'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: costs of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_costs00
static int tolua_ocr_RecognizedPage_costs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  floatarray* c = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'costs'",NULL);
#endif
 try {
 {
  self->costs(*c,index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'costs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bbox of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_bbox00
static int tolua_ocr_RecognizedPage_bbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bbox'",NULL);
#endif
 try {
 {
  rectangle tolua_ret = (rectangle)  self->bbox(index);
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
 tolua_error(tolua_S,"#ferror in function 'bbox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBbox of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setBbox00
static int tolua_ocr_RecognizedPage_setBbox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectangle",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  rectangle bbox = *((rectangle*)  tolua_tousertype(tolua_S,2,0));
  int index = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBbox'",NULL);
#endif
 try {
 {
  self->setBbox(bbox,index);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBbox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: width of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_width00
static int tolua_ocr_RecognizedPage_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: height of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_height00
static int tolua_ocr_RecognizedPage_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setWidth of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setWidth00
static int tolua_ocr_RecognizedPage_setWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setWidth'",NULL);
#endif
 try {
 {
  self->setWidth(width);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHeight of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setHeight00
static int tolua_ocr_RecognizedPage_setHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  int height = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHeight'",NULL);
#endif
 try {
 {
  self->setHeight(height);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: description of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_description00
static int tolua_ocr_RecognizedPage_description00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'description'",NULL);
#endif
 try {
 {
  const char* tolua_ret = (const char*)  self->description();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'description'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDescription of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setDescription00
static int tolua_ocr_RecognizedPage_setDescription00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDescription'",NULL);
#endif
 try {
 {
  self->setDescription(s);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDescription'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: timeReport of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_timeReport00
static int tolua_ocr_RecognizedPage_timeReport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'timeReport'",NULL);
#endif
 try {
 {
  const char* tolua_ret = (const char*)  self->timeReport();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'timeReport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimeReport of class  RecognizedPage */
#ifndef TOLUA_DISABLE_tolua_ocr_RecognizedPage_setTimeReport00
static int tolua_ocr_RecognizedPage_setTimeReport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"RecognizedPage",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  RecognizedPage* self = (RecognizedPage*)  tolua_tousertype(tolua_S,1,0);
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimeReport'",NULL);
#endif
 try {
 {
  self->setTimeReport(s);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimeReport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: str2array */
#ifndef TOLUA_DISABLE_tolua_ocr_str2array00
static int tolua_ocr_str2array00(lua_State* tolua_S)
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
  bytearray* out = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  const char* s = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  str2array(*out,s);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'str2array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: array2str */
#ifndef TOLUA_DISABLE_tolua_ocr_array2str00
static int tolua_ocr_array2str00(lua_State* tolua_S)
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
  bytearray* buf = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  char* tolua_ret = (char*)  array2str(*buf);
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'array2str'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_NewBpnetLineOCR */
#ifndef TOLUA_DISABLE_tolua_ocr_make_NewBpnetLineOCR00
static int tolua_ocr_make_NewBpnetLineOCR00(lua_State* tolua_S)
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
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  IRecognizeLine* tolua_ret = (IRecognizeLine*)  make_NewBpnetLineOCR(path);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IRecognizeLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_NewBpnetLineOCR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_NewGroupingLineOCR */
#ifndef TOLUA_DISABLE_tolua_ocr_make_NewGroupingLineOCR00
static int tolua_ocr_make_NewGroupingLineOCR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"ISegmentLine",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* classifier = ((ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0));
  ISegmentLine* segmenter = ((ISegmentLine*)  tolua_tousertype(tolua_S,2,0));
  bool use_line_info = ((bool)  tolua_toboolean(tolua_S,3,true));
 try {
 {
  IRecognizeLine* tolua_ret = (IRecognizeLine*)  make_NewGroupingLineOCR(classifier,segmenter,use_line_info);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IRecognizeLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_NewGroupingLineOCR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_GLineRec */
#ifndef TOLUA_DISABLE_tolua_ocr_make_GLineRec00
static int tolua_ocr_make_GLineRec00(lua_State* tolua_S)
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
  IRecognizeLine* tolua_ret = (IRecognizeLine*)  make_GLineRec();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IRecognizeLine");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_GLineRec'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: replace_values */
#ifndef TOLUA_DISABLE_tolua_ocr_replace_values00
static int tolua_ocr_replace_values00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"byte",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"byte",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  byte tolua_var_9 = *((byte*)  tolua_tousertype(tolua_S,2,0));
  byte tolua_var_10 = *((byte*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  replace_values(*a,tolua_var_9,tolua_var_10);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'replace_values'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: replace_values */
#ifndef TOLUA_DISABLE_tolua_ocr_replace_values01
static int tolua_ocr_replace_values01(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int tolua_var_11 = ((int)  tolua_tonumber(tolua_S,2,0));
  int tolua_var_12 = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  replace_values(*a,tolua_var_11,tolua_var_12);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_replace_values00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: replace_values */
#ifndef TOLUA_DISABLE_tolua_ocr_replace_values02
static int tolua_ocr_replace_values02(lua_State* tolua_S)
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
  floatarray* a = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  float tolua_var_13 = ((float)  tolua_tonumber(tolua_S,2,0));
  float tolua_var_14 = ((float)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  replace_values(*a,tolua_var_13,tolua_var_14);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_replace_values01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: evaluate_segmentation */
#ifndef TOLUA_DISABLE_tolua_ocr_evaluate_segmentation00
static int tolua_ocr_evaluate_segmentation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  int nover = ((int)  tolua_tonumber(tolua_S,1,0));
  int nunder = ((int)  tolua_tonumber(tolua_S,2,0));
  int nmis = ((int)  tolua_tonumber(tolua_S,3,0));
  intarray* model_raw = ((intarray*)  tolua_tousertype(tolua_S,4,0));
  intarray* image_raw = ((intarray*)  tolua_tousertype(tolua_S,5,0));
  float tolerance = ((float)  tolua_tonumber(tolua_S,6,0));
 try {
 {
  evaluate_segmentation(nover,nunder,nmis,*model_raw,*image_raw,tolerance);
 tolua_pushnumber(tolua_S,(lua_Number)nover);
 tolua_pushnumber(tolua_S,(lua_Number)nunder);
 tolua_pushnumber(tolua_S,(lua_Number)nmis);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'evaluate_segmentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ocr_result_to_charseg */
#ifndef TOLUA_DISABLE_tolua_ocr_ocr_result_to_charseg00
static int tolua_ocr_ocr_result_to_charseg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"idmap",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"intarray",0,&tolua_err)) ||
 !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* cseg = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  idmap* map = ((idmap*)  tolua_tousertype(tolua_S,2,0));
  intarray* ids = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  intarray* segmentation = ((intarray*)  tolua_tousertype(tolua_S,4,0));
  bool map_all = ((bool)  tolua_toboolean(tolua_S,5,true));
 try {
 {
  ocr_result_to_charseg(*cseg,*map,*ids,*segmentation,map_all);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ocr_result_to_charseg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ocr_bboxes_to_charseg */
#ifndef TOLUA_DISABLE_tolua_ocr_ocr_bboxes_to_charseg00
static int tolua_ocr_ocr_bboxes_to_charseg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"rectanglearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* cseg = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  rectanglearray* bboxes = ((rectanglearray*)  tolua_tousertype(tolua_S,2,0));
  intarray* segmentation = ((intarray*)  tolua_tousertype(tolua_S,3,0));
 try {
 {
  ocr_bboxes_to_charseg(*cseg,*bboxes,*segmentation);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ocr_bboxes_to_charseg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_pixel */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_pixel00
static int tolua_ocr_pseg_pixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  int column = ((int)  tolua_tonumber(tolua_S,1,0));
  int paragraph = ((int)  tolua_tonumber(tolua_S,2,0));
  int line = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  int tolua_ret = (int)  pseg_pixel(column,paragraph,line);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_pixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_pixel */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_pixel01
static int tolua_ocr_pseg_pixel01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  int column = ((int)  tolua_tonumber(tolua_S,1,0));
  int line = ((int)  tolua_tonumber(tolua_S,2,0));
 try {
 {
  int tolua_ret = (int)  pseg_pixel(column,line);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_pseg_pixel00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_column */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_column00
static int tolua_ocr_pseg_column00(lua_State* tolua_S)
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
  int pixel = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  pseg_column(pixel);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_column'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_paragraph */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_paragraph00
static int tolua_ocr_pseg_paragraph00(lua_State* tolua_S)
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
  int pixel = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  pseg_paragraph(pixel);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_paragraph'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_line */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_line00
static int tolua_ocr_pseg_line00(lua_State* tolua_S)
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
  int pixel = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  pseg_line(pixel);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_pline */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_pline00
static int tolua_ocr_pseg_pline00(lua_State* tolua_S)
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
  int pixel = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  pseg_pline(pixel);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_pline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cseg_pixel */
#ifndef TOLUA_DISABLE_tolua_ocr_cseg_pixel00
static int tolua_ocr_cseg_pixel00(lua_State* tolua_S)
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
  int chr = ((int)  tolua_tonumber(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  cseg_pixel(chr);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cseg_pixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_columns */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_columns00
static int tolua_ocr_pseg_columns00(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  pseg_columns(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_columns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: pseg_plines */
#ifndef TOLUA_DISABLE_tolua_ocr_pseg_plines00
static int tolua_ocr_pseg_plines00(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  pseg_plines(*a);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pseg_plines'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: hex */
#ifndef TOLUA_DISABLE_tolua_ocr_hex00
static int tolua_ocr_hex00(lua_State* tolua_S)
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
  int tolua_ret = (int)  hex(s);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_intarray */
#ifndef TOLUA_DISABLE_tolua_ocr_as_intarray00
static int tolua_ocr_as_intarray00(lua_State* tolua_S)
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
  intarray* tolua_ret = (intarray*)  as_intarray(s);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'as_intarray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_intarray */
#ifndef TOLUA_DISABLE_tolua_ocr_as_intarray01
static int tolua_ocr_as_intarray01(lua_State* tolua_S)
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
  intarray* tolua_ret = (intarray*)  as_intarray(*a);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_as_intarray00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_intarray */
#ifndef TOLUA_DISABLE_tolua_ocr_as_intarray02
static int tolua_ocr_as_intarray02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  nustring* a = ((nustring*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  intarray* tolua_ret = (intarray*)  as_intarray(*a);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_as_intarray01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_string */
#ifndef TOLUA_DISABLE_tolua_ocr_as_string00
static int tolua_ocr_as_string00(lua_State* tolua_S)
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
  bytearray* a = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  const char* tolua_ret = (const char*)  as_string(*a);
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'as_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_string */
#ifndef TOLUA_DISABLE_tolua_ocr_as_string01
static int tolua_ocr_as_string01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  nustring* a = ((nustring*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  const char* tolua_ret = (const char*)  as_string(*a);
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_as_string00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: as_string */
#ifndef TOLUA_DISABLE_tolua_ocr_as_string02
static int tolua_ocr_as_string02(lua_State* tolua_S)
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
  const char* tolua_ret = (const char*)  as_string(*a);
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_as_string01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: utf32 */
#ifndef TOLUA_DISABLE_tolua_ocr_utf3200
static int tolua_ocr_utf3200(lua_State* tolua_S)
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
  intarray* tolua_ret = (intarray*)  utf32(s);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"intarray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'utf32'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: utf8 */
#ifndef TOLUA_DISABLE_tolua_ocr_utf800
static int tolua_ocr_utf800(lua_State* tolua_S)
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
  intarray* a = ((intarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  const char* tolua_ret = (const char*)  utf8(*a);
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

/* method: image of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_image00
static int tolua_ocr_ICharacter_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'image'",NULL);
#endif
 try {
 {
  bytearray& tolua_ret = (bytearray&)  self->image();
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"bytearray");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_image of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_get_image00
static int tolua_ocr_ICharacter_get_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"colib::bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
  colib::bytearray* result = ((colib::bytearray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_image'",NULL);
#endif
 try {
 {
  self->get_image(*result);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: code of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_code00
static int tolua_ocr_ICharacter_code00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'code'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->code();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'code'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: xHeight of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_xHeight00
static int tolua_ocr_ICharacter_xHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'xHeight'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->xHeight();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'xHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: baseline of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_baseline00
static int tolua_ocr_ICharacter_baseline00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'baseline'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->baseline();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'baseline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: descender of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_descender00
static int tolua_ocr_ICharacter_descender00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'descender'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->descender();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'descender'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ascender of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_ascender00
static int tolua_ocr_ICharacter_ascender00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ascender'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->ascender();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ascender'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: info of class  ICharacter */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacter_info00
static int tolua_ocr_ICharacter_info00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacter",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacter* self = (ICharacter*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'info'",NULL);
#endif
 try {
 {
  const char* tolua_ret = (const char*)  self->info();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'info'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sectionsCount of class  ICharacterLibrary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterLibrary_sectionsCount00
static int tolua_ocr_ICharacterLibrary_sectionsCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* self = (ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'sectionsCount'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->sectionsCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sectionsCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchToSection of class  ICharacterLibrary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterLibrary_switchToSection00
static int tolua_ocr_ICharacterLibrary_switchToSection00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* self = (ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0);
  int no = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchToSection'",NULL);
#endif
 try {
 {
  self->switchToSection(no);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchToSection'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: currentSectionIndex of class  ICharacterLibrary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterLibrary_currentSectionIndex00
static int tolua_ocr_ICharacterLibrary_currentSectionIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* self = (ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'currentSectionIndex'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->currentSectionIndex();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'currentSectionIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: charactersCount of class  ICharacterLibrary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterLibrary_charactersCount00
static int tolua_ocr_ICharacterLibrary_charactersCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* self = (ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'charactersCount'",NULL);
#endif
 try {
 {
  int tolua_ret = (int)  self->charactersCount();
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'charactersCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: character of class  ICharacterLibrary */
#ifndef TOLUA_DISABLE_tolua_ocr_ICharacterLibrary_character00
static int tolua_ocr_ICharacterLibrary_character00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* self = (ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'character'",NULL);
#endif
 try {
 {
  ICharacter& tolua_ret = (ICharacter&)  self->character(index);
  tolua_pushusertype(tolua_S,(void*)&tolua_ret,"ICharacter");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'character'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_slice_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_slice_charlib00
static int tolua_ocr_make_slice_charlib00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* charlib = ((ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0));
  int from_incl = ((int)  tolua_tonumber(tolua_S,2,0));
  int upto_excl = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_slice_charlib(*charlib,from_incl,upto_excl);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_slice_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_filter_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_filter_charlib00
static int tolua_ocr_make_filter_charlib00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ICharacterLibrary",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterLibrary* charlib = ((ICharacterLibrary*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_filter_charlib(*charlib);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_filter_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_grid_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_grid_charlib00
static int tolua_ocr_make_grid_charlib00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* directory = ((const char*)  tolua_tostring(tolua_S,1,0));
  bool use_garbage = ((bool)  tolua_toboolean(tolua_S,2,true));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_grid_charlib(directory,use_garbage);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_grid_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_uw3_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_uw3_charlib00
static int tolua_ocr_make_uw3_charlib00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* directory = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* picture_suffix = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_uw3_charlib(directory,picture_suffix);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_uw3_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_screenocr_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_screenocr_charlib00
static int tolua_ocr_make_screenocr_charlib00(lua_State* tolua_S)
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
  const char* directory = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_screenocr_charlib(directory);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_screenocr_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_pnglist_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_pnglist_charlib00
static int tolua_ocr_make_pnglist_charlib00(lua_State* tolua_S)
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
  const char* list = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_pnglist_charlib(list);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_pnglist_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_ocropus_charlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_ocropus_charlib00
static int tolua_ocr_make_ocropus_charlib00(lua_State* tolua_S)
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
  const char* prefix = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_ocropus_charlib(prefix);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_ocropus_charlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentationCharlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentationCharlib00
static int tolua_ocr_make_SegmentationCharlib00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* file_list_path = ((const char*)  tolua_tostring(tolua_S,1,0));
  bool produce_garbage = ((bool)  tolua_toboolean(tolua_S,2,false));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_SegmentationCharlib(file_list_path,produce_garbage);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_SegmentationCharlib'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_SegmentationCharlib */
#ifndef TOLUA_DISABLE_tolua_ocr_make_SegmentationCharlib01
static int tolua_ocr_make_SegmentationCharlib01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* image_path = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* text_path = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool produce_garbage = ((bool)  tolua_toboolean(tolua_S,3,0));
 try {
 {
  ICharacterLibrary* tolua_ret = (ICharacterLibrary*)  make_SegmentationCharlib(image_path,text_path,produce_garbage);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterLibrary");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_make_SegmentationCharlib00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: parse_vector */
#ifndef TOLUA_DISABLE_tolua_ocr_parse_vector00
static int tolua_ocr_parse_vector00(lua_State* tolua_S)
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
  intarray* tolua_var_15 = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  const char* tolua_var_16 = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  parse_vector(*tolua_var_15,tolua_var_16);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parse_vector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: get_version_string */
#ifndef TOLUA_DISABLE_tolua_ocr_get_version_string00
static int tolua_ocr_get_version_string00(lua_State* tolua_S)
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
  const char* tolua_ret = (const char*)  get_version_string();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_version_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: set_version_string */
#ifndef TOLUA_DISABLE_tolua_ocr_set_version_string00
static int tolua_ocr_set_version_string00(lua_State* tolua_S)
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
  const char* tolua_var_17 = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  set_version_string(tolua_var_17);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_version_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: hardcoded_version_string */
#ifndef TOLUA_DISABLE_tolua_ocr_hardcoded_version_string00
static int tolua_ocr_hardcoded_version_string00(lua_State* tolua_S)
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
  const char* tolua_ret = (const char*)  hardcoded_version_string();
 tolua_pushstring(tolua_S,(const char*)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hardcoded_version_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: concat_segmentation */
#ifndef TOLUA_DISABLE_tolua_ocr_concat_segmentation00
static int tolua_ocr_concat_segmentation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
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
#endif
 {
  intarray* dst = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* src = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
 try {
 {
  concat_segmentation(*dst,*src,x,y);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'concat_segmentation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_small_components */
#ifndef TOLUA_DISABLE_tolua_ocr_remove_small_components00
static int tolua_ocr_remove_small_components00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* bimage = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int mw = ((int)  tolua_tonumber(tolua_S,2,0));
  int mh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  remove_small_components(*bimage,mw,mh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove_small_components'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_marginal_components */
#ifndef TOLUA_DISABLE_tolua_ocr_remove_marginal_components00
static int tolua_ocr_remove_marginal_components00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
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
#endif
 {
  intarray* bimage = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  remove_marginal_components(*bimage,x0,y0,x1,y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'remove_marginal_components'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_small_components */
#ifndef TOLUA_DISABLE_tolua_ocr_remove_small_components01
static int tolua_ocr_remove_small_components01(lua_State* tolua_S)
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
  bytearray* bimage = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int mw = ((int)  tolua_tonumber(tolua_S,2,0));
  int mh = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  remove_small_components(*bimage,mw,mh);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_remove_small_components00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: remove_marginal_components */
#ifndef TOLUA_DISABLE_tolua_ocr_remove_marginal_components01
static int tolua_ocr_remove_marginal_components01(lua_State* tolua_S)
{
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
 {
  bytearray* bimage = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  int x0 = ((int)  tolua_tonumber(tolua_S,2,0));
  int y0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int x1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,5,0));
 try {
 {
  remove_marginal_components(*bimage,x0,y0,x1,y1);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_remove_marginal_components00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: runlength_histogram */
#ifndef TOLUA_DISABLE_tolua_ocr_runlength_histogram00
static int tolua_ocr_runlength_histogram00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  floatarray* hist = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* img = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  runlength_histogram(*hist,*img);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runlength_histogram'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: find_median */
#ifndef TOLUA_DISABLE_tolua_ocr_find_median00
static int tolua_ocr_find_median00(lua_State* tolua_S)
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
  floatarray* tolua_var_18 = ((floatarray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  int tolua_ret = (int)  find_median(*tolua_var_18);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_median'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_background_white */
#ifndef TOLUA_DISABLE_tolua_ocr_make_background_white00
static int tolua_ocr_make_background_white00(lua_State* tolua_S)
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
  bytearray* tolua_var_19 = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
 try {
 {
  make_background_white(*tolua_var_19);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_background_white'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_delete00
static int tolua_ocr_Classifier_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
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

/* method: param of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_param00
static int tolua_ocr_Classifier_param00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  double value = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'param'",NULL);
#endif
 try {
 {
  self->param(name,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'param'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_add00
static int tolua_ocr_Classifier_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  int c = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'",NULL);
#endif
 try {
 {
  self->add(*v,c);
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

/* method: score of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_score00
static int tolua_ocr_Classifier_score00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  floatarray* result = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'score'",NULL);
#endif
 try {
 {
  self->score(*result,*v);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'score'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start_training of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_start_training00
static int tolua_ocr_Classifier_start_training00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start_training'",NULL);
#endif
 try {
 {
  self->start_training();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start_training'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start_classifying of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_start_classifying00
static int tolua_ocr_Classifier_start_classifying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start_classifying'",NULL);
#endif
 try {
 {
  self->start_classifying();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start_classifying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seal of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_seal00
static int tolua_ocr_Classifier_seal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seal'",NULL);
#endif
 try {
 {
  self->seal();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_save00
static int tolua_ocr_Classifier_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_load00
static int tolua_ocr_Classifier_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isusertype(tolua_S,2,"FILE",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  FILE* stream = ((FILE*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(stream);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_save01
static int tolua_ocr_Classifier_save01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Classifier_save00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  Classifier */
#ifndef TOLUA_DISABLE_tolua_ocr_Classifier_load01
static int tolua_ocr_Classifier_load01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Classifier* self = (Classifier*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Classifier_load00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_delete00
static int tolua_ocr_Density_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
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

/* method: param of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_param00
static int tolua_ocr_Density_param00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  double value = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'param'",NULL);
#endif
 try {
 {
  self->param(name,value);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'param'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: add of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_add00
static int tolua_ocr_Density_add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'add'",NULL);
#endif
 try {
 {
  self->add(*v);
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

/* method: logp of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_logp00
static int tolua_ocr_Density_logp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
  floatarray* v = ((floatarray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'logp'",NULL);
#endif
 try {
 {
  double tolua_ret = (double)  self->logp(*v);
 tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'logp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start_training of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_start_training00
static int tolua_ocr_Density_start_training00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start_training'",NULL);
#endif
 try {
 {
  self->start_training();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start_training'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: start_classifying of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_start_classifying00
static int tolua_ocr_Density_start_classifying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'start_classifying'",NULL);
#endif
 try {
 {
  self->start_classifying();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'start_classifying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: seal of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_seal00
static int tolua_ocr_Density_seal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'seal'",NULL);
#endif
 try {
 {
  self->seal();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'seal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: save of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_save00
static int tolua_ocr_Density_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'save'",NULL);
#endif
 try {
 {
  self->save(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: load of class  Density */
#ifndef TOLUA_DISABLE_tolua_ocr_Density_load00
static int tolua_ocr_Density_load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Density",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Density* self = (Density*)  tolua_tousertype(tolua_S,1,0);
  const char* path = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'load'",NULL);
#endif
 try {
 {
  self->load(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_AdaptClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_make_AdaptClassifier00
static int tolua_ocr_make_AdaptClassifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Classifier",0,&tolua_err) ||
 !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Classifier* tolua_var_20 = ((Classifier*)  tolua_tousertype(tolua_S,1,0));
  bool output_garbage = ((bool)  tolua_toboolean(tolua_S,2,false));
 try {
 {
  ICharacterClassifier* tolua_ret = (ICharacterClassifier*)  make_AdaptClassifier(tolua_var_20,output_garbage);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"ICharacterClassifier");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_AdaptClassifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_BpnetClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_make_BpnetClassifier00
static int tolua_ocr_make_BpnetClassifier00(lua_State* tolua_S)
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
  Classifier* tolua_ret = (Classifier*)  make_BpnetClassifier();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Classifier");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_BpnetClassifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_MixturesClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_make_MixturesClassifier00
static int tolua_ocr_make_MixturesClassifier00(lua_State* tolua_S)
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
  Classifier* tolua_ret = (Classifier*)  make_MixturesClassifier();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Classifier");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_MixturesClassifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_BpnetMixturesClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_make_BpnetMixturesClassifier00
static int tolua_ocr_make_BpnetMixturesClassifier00(lua_State* tolua_S)
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
  Classifier* tolua_ret = (Classifier*)  make_BpnetMixturesClassifier();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Classifier");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_BpnetMixturesClassifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_BpnetMixturesClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_make_BpnetMixturesClassifier01
static int tolua_ocr_make_BpnetMixturesClassifier01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isstring(tolua_S,1,0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  const char* tolua_var_21 = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* tolua_var_22 = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  Classifier* tolua_ret = (Classifier*)  make_BpnetMixturesClassifier(tolua_var_21,tolua_var_22);
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Classifier");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
tolua_lerror:
 return tolua_ocr_make_BpnetMixturesClassifier00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: set_resource_path */
#ifndef TOLUA_DISABLE_tolua_ocr_set_resource_path00
static int tolua_ocr_set_resource_path00(lua_State* tolua_S)
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
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  set_resource_path(path);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_resource_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: find_and_load_ICharacterClassifier */
#ifndef TOLUA_DISABLE_tolua_ocr_find_and_load_ICharacterClassifier00
static int tolua_ocr_find_and_load_ICharacterClassifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ICharacterClassifier",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  ICharacterClassifier* tolua_var_23 = ((ICharacterClassifier*)  tolua_tousertype(tolua_S,1,0));
  const char* resource = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  find_and_load_ICharacterClassifier(*tolua_var_23,resource);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_and_load_ICharacterClassifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: find_and_load_IRecognizeLine */
#ifndef TOLUA_DISABLE_tolua_ocr_find_and_load_IRecognizeLine00
static int tolua_ocr_find_and_load_IRecognizeLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"IRecognizeLine",0,&tolua_err)) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  IRecognizeLine* i = ((IRecognizeLine*)  tolua_tousertype(tolua_S,1,0));
  const char* resource = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  find_and_load_IRecognizeLine(*i,resource);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'find_and_load_IRecognizeLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: extract_segment */
#ifndef TOLUA_DISABLE_tolua_ocr_extract_segment00
static int tolua_ocr_extract_segment00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* result = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  intarray* image = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  int n = ((int)  tolua_tonumber(tolua_S,3,0));
 try {
 {
  extract_segment(*result,*image,n);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'extract_segment'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: make_StandardFst */
#ifndef TOLUA_DISABLE_tolua_ocr_make_StandardFst00
static int tolua_ocr_make_StandardFst00(lua_State* tolua_S)
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
  IGenericFst* tolua_ret = (IGenericFst*)  make_StandardFst();
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"IGenericFst");
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'make_StandardFst'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: beam_search */
#ifndef TOLUA_DISABLE_tolua_ocr_beam_search00
static int tolua_ocr_beam_search00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"floatarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"IGenericFst",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* ids = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  intarray* vertices = ((intarray*)  tolua_tousertype(tolua_S,2,0));
  intarray* outputs = ((intarray*)  tolua_tousertype(tolua_S,3,0));
  floatarray* costs = ((floatarray*)  tolua_tousertype(tolua_S,4,0));
  IGenericFst* graph = ((IGenericFst*)  tolua_tousertype(tolua_S,5,0));
  int beam_width = ((int)  tolua_tonumber(tolua_S,6,10));
 try {
 {
  beam_search(*ids,*vertices,*outputs,*costs,*graph,beam_width);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'beam_search'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: degrade */
#ifndef TOLUA_DISABLE_tolua_ocr_degrade00
static int tolua_ocr_degrade00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
 !tolua_isnumber(tolua_S,7,1,&tolua_err) ||
 !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  bytearray* image = ((bytearray*)  tolua_tousertype(tolua_S,1,0));
  double jitter_mean = ((double)  tolua_tonumber(tolua_S,2,.2));
  double jitter_sigma = ((double)  tolua_tonumber(tolua_S,3,.1));
  double sensitivity_mean = ((double)  tolua_tonumber(tolua_S,4,.125));
  double sensitivity_sigma = ((double)  tolua_tonumber(tolua_S,5,.04));
  double threshold_mean = ((double)  tolua_tonumber(tolua_S,6,.4));
  double threshold_sigma = ((double)  tolua_tonumber(tolua_S,7,.04));
 try {
 {
  degrade(*image,jitter_mean,jitter_sigma,sensitivity_mean,sensitivity_sigma,threshold_mean,threshold_sigma);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'degrade'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: enabled of class  Logger */
#ifndef TOLUA_DISABLE_tolua_get_Logger_enabled
static int tolua_get_Logger_enabled(lua_State* tolua_S)
{
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'enabled'",NULL);
#endif
 tolua_pushboolean(tolua_S,(bool)self->enabled);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: enabled of class  Logger */
#ifndef TOLUA_DISABLE_tolua_set_Logger_enabled
static int tolua_set_Logger_enabled(lua_State* tolua_S)
{
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'enabled'",NULL);
 if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->enabled = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_new00
static int tolua_ocr_Logger_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  Logger* tolua_ret = (Logger*)  Mtolua_new(Logger(name));
  tolua_pushusertype(tolua_S,(void*)tolua_ret,"Logger");
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

/* method: new_local of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_new00_local
static int tolua_ocr_Logger_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertable(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
 try {
 {
  Logger* tolua_ret = (Logger*)  Mtolua_new(Logger(name));
  tolua_pushusertype(tolua_S,(void *)tolua_ret,"Logger");
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

/* method: recolor of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_recolor00
static int tolua_ocr_Logger_recolor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"colib::intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  colib::intarray* tolua_var_24 = ((colib::intarray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'recolor'",NULL);
#endif
 try {
 {
  self->recolor(description,*tolua_var_24);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'recolor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log00
static int tolua_ocr_Logger_log00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* message = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(message);
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

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log01
static int tolua_ocr_Logger_log01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* message = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool tolua_var_25 = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(message,tolua_var_25);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log02
static int tolua_ocr_Logger_log02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* message = ((const char*)  tolua_tostring(tolua_S,2,0));
  int tolua_var_26 = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(message,tolua_var_26);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log03
static int tolua_ocr_Logger_log03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* message = ((const char*)  tolua_tostring(tolua_S,2,0));
  double tolua_var_27 = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(message,tolua_var_27);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log04
static int tolua_ocr_Logger_log04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 !tolua_isstring(tolua_S,3,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* tolua_var_28 = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,tolua_var_28);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log05
static int tolua_ocr_Logger_log05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  bytearray* tolua_var_29 = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_29);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log06
static int tolua_ocr_Logger_log06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"intarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  intarray* tolua_var_30 = ((intarray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_30);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log07
static int tolua_ocr_Logger_log07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"floatarray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  floatarray* tolua_var_31 = ((floatarray*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_31);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log08
static int tolua_ocr_Logger_log08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"nuchar",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  nuchar tolua_var_32 = *((nuchar*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,tolua_var_32);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log09
static int tolua_ocr_Logger_log09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"nustring",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  nustring* tolua_var_33 = ((nustring*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_33);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log10
static int tolua_ocr_Logger_log10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"rectangle",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  rectangle* tolua_var_34 = ((rectangle*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_34);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log11
static int tolua_ocr_Logger_log11(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"bytearray",0,&tolua_err)) ||
 !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
 !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  bytearray* line_image = ((bytearray*)  tolua_tousertype(tolua_S,3,0));
  int baseline_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int xheight_y = ((int)  tolua_tonumber(tolua_S,5,0));
  int ascender_y = ((int)  tolua_tonumber(tolua_S,6,0));
  int descender_y = ((int)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*line_image,baseline_y,xheight_y,ascender_y,descender_y);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log10(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: log of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_log12
static int tolua_ocr_Logger_log12(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isstring(tolua_S,2,0,&tolua_err) ||
 (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"IGenericFst",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
 goto tolua_lerror;
 else
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const char* description = ((const char*)  tolua_tostring(tolua_S,2,0));
  IGenericFst* tolua_var_35 = ((IGenericFst*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'log'",NULL);
#endif
 try {
 {
  self->log(description,*tolua_var_35);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
tolua_lerror:
 return tolua_ocr_Logger_log11(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: indent of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_indent00
static int tolua_ocr_Logger_indent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'indent'",NULL);
#endif
 try {
 {
  self->indent();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'indent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dedent of class  Logger */
#ifndef TOLUA_DISABLE_tolua_ocr_Logger_dedent00
static int tolua_ocr_Logger_dedent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dedent'",NULL);
#endif
 try {
 {
  self->dedent();
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dedent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: set_logger_directory */
#ifndef TOLUA_DISABLE_tolua_ocr_set_logger_directory00
static int tolua_ocr_set_logger_directory00(lua_State* tolua_S)
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
  const char* tolua_var_36 = ((const char*)  tolua_tostring(tolua_S,1,0));
 try {
 {
  set_logger_directory(tolua_var_36);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_logger_directory'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: visualize_segmentation_by_RAST */
#ifndef TOLUA_DISABLE_tolua_ocr_visualize_segmentation_by_RAST00
static int tolua_ocr_visualize_segmentation_by_RAST00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"intarray",0,&tolua_err)) ||
 (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"bytearray",0,&tolua_err)) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  intarray* result = ((intarray*)  tolua_tousertype(tolua_S,1,0));
  bytearray* in_not_inverted = ((bytearray*)  tolua_tousertype(tolua_S,2,0));
 try {
 {
  visualize_segmentation_by_RAST(*result,*in_not_inverted);
 }
} catch(const char *s) {
 return luaL_error(tolua_S, "%s", s);
}
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visualize_segmentation_by_RAST'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_ocr_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"point","point","",tolua_collect_point);
 #else
 tolua_cclass(tolua_S,"point","point","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"point");
  tolua_variable(tolua_S,"x",tolua_get_point_x,tolua_set_point_x);
  tolua_variable(tolua_S,"y",tolua_get_point_y,tolua_set_point_y);
  tolua_function(tolua_S,"new",tolua_ocr_point_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_point_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_point_new00_local);
  tolua_function(tolua_S,"new",tolua_ocr_point_new01);
  tolua_function(tolua_S,"new_local",tolua_ocr_point_new01_local);
  tolua_function(tolua_S,".call",tolua_ocr_point_new01_local);
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
  tolua_function(tolua_S,"new",tolua_ocr_rectangle_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_rectangle_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_rectangle_new00_local);
  tolua_function(tolua_S,"new",tolua_ocr_rectangle_new01);
  tolua_function(tolua_S,"new_local",tolua_ocr_rectangle_new01_local);
  tolua_function(tolua_S,".call",tolua_ocr_rectangle_new01_local);
  tolua_function(tolua_S,"empty",tolua_ocr_rectangle_empty00);
  tolua_function(tolua_S,"width",tolua_ocr_rectangle_width00);
  tolua_function(tolua_S,"height",tolua_ocr_rectangle_height00);
  tolua_function(tolua_S,"include",tolua_ocr_rectangle_include00);
  tolua_function(tolua_S,"contains",tolua_ocr_rectangle_contains00);
  tolua_function(tolua_S,"intersect",tolua_ocr_rectangle_intersect00);
  tolua_function(tolua_S,"include",tolua_ocr_rectangle_include01);
  tolua_function(tolua_S,"intersection",tolua_ocr_rectangle_intersection00);
  tolua_function(tolua_S,"inclusion",tolua_ocr_rectangle_inclusion00);
  tolua_function(tolua_S,"grow",tolua_ocr_rectangle_grow00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_line_segmentation_black",tolua_ocr_make_line_segmentation_black00);
 tolua_function(tolua_S,"make_line_segmentation_white",tolua_ocr_make_line_segmentation_white00);
 tolua_function(tolua_S,"make_page_segmentation_black",tolua_ocr_make_page_segmentation_black00);
 tolua_function(tolua_S,"make_page_segmentation_white",tolua_ocr_make_page_segmentation_white00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"idmap","idmap","",tolua_collect_idmap);
 #else
 tolua_cclass(tolua_S,"idmap","idmap","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"idmap");
  tolua_function(tolua_S,"new",tolua_ocr_idmap_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_idmap_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_idmap_new00_local);
  tolua_function(tolua_S,"segments_of_id",tolua_ocr_idmap_segments_of_id00);
  tolua_function(tolua_S,"ids_of_segment",tolua_ocr_idmap_ids_of_segment00);
  tolua_function(tolua_S,"associate",tolua_ocr_idmap_associate00);
  tolua_function(tolua_S,"clear",tolua_ocr_idmap_clear00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"IComponent","IComponent","",tolua_collect_IComponent);
 #else
 tolua_cclass(tolua_S,"IComponent","IComponent","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"IComponent");
  tolua_function(tolua_S,"delete",tolua_ocr_IComponent_delete00);
  tolua_function(tolua_S,"description",tolua_ocr_IComponent_description00);
  tolua_function(tolua_S,"set",tolua_ocr_IComponent_set00);
  tolua_function(tolua_S,"set",tolua_ocr_IComponent_set01);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ICleanupGray","ICleanupGray","IComponent",NULL);
 tolua_beginmodule(tolua_S,"ICleanupGray");
  tolua_function(tolua_S,"cleanup",tolua_ocr_ICleanupGray_cleanup00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ICleanupBinary","ICleanupBinary","IComponent",NULL);
 tolua_beginmodule(tolua_S,"ICleanupBinary");
  tolua_function(tolua_S,"cleanup",tolua_ocr_ICleanupBinary_cleanup00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ISegmentPage","ISegmentPage","IComponent",NULL);
 tolua_beginmodule(tolua_S,"ISegmentPage");
  tolua_function(tolua_S,"segment",tolua_ocr_ISegmentPage_segment00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ISegmentLine","ISegmentLine","IComponent",NULL);
 tolua_beginmodule(tolua_S,"ISegmentLine");
  tolua_function(tolua_S,"charseg",tolua_ocr_ISegmentLine_charseg00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"IBinarize","IBinarize","IComponent",NULL);
 tolua_beginmodule(tolua_S,"IBinarize");
  tolua_function(tolua_S,"binarize",tolua_ocr_IBinarize_binarize00);
  tolua_function(tolua_S,"binarize",tolua_ocr_IBinarize_binarize01);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"IGenericFst","IGenericFst","IComponent",NULL);
 tolua_beginmodule(tolua_S,"IGenericFst");
  tolua_function(tolua_S,"clear",tolua_ocr_IGenericFst_clear00);
  tolua_function(tolua_S,"newState",tolua_ocr_IGenericFst_newState00);
  tolua_function(tolua_S,"addTransition",tolua_ocr_IGenericFst_addTransition00);
  tolua_function(tolua_S,"setStart",tolua_ocr_IGenericFst_setStart00);
  tolua_function(tolua_S,"setAccept",tolua_ocr_IGenericFst_setAccept00);
  tolua_function(tolua_S,"special",tolua_ocr_IGenericFst_special00);
  tolua_function(tolua_S,"bestpath",tolua_ocr_IGenericFst_bestpath00);
  tolua_function(tolua_S,"setString",tolua_ocr_IGenericFst_setString00);
  tolua_function(tolua_S,"nStates",tolua_ocr_IGenericFst_nStates00);
  tolua_function(tolua_S,"getStart",tolua_ocr_IGenericFst_getStart00);
  tolua_function(tolua_S,"getAcceptCost",tolua_ocr_IGenericFst_getAcceptCost00);
  tolua_function(tolua_S,"arcs",tolua_ocr_IGenericFst_arcs00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"ICharacterClassifier","ICharacterClassifier","IComponent",tolua_collect_ICharacterClassifier);
 #else
 tolua_cclass(tolua_S,"ICharacterClassifier","ICharacterClassifier","IComponent",NULL);
 #endif
 tolua_beginmodule(tolua_S,"ICharacterClassifier");
  tolua_function(tolua_S,"set",tolua_ocr_ICharacterClassifier_set00);
  tolua_function(tolua_S,"set",tolua_ocr_ICharacterClassifier_set01);
  tolua_function(tolua_S,"length",tolua_ocr_ICharacterClassifier_length00);
  tolua_function(tolua_S,"cls",tolua_ocr_ICharacterClassifier_cls00);
  tolua_function(tolua_S,"cost",tolua_ocr_ICharacterClassifier_cost00);
  tolua_function(tolua_S,"startTraining",tolua_ocr_ICharacterClassifier_startTraining00);
  tolua_function(tolua_S,"addTrainingChar",tolua_ocr_ICharacterClassifier_addTrainingChar00);
  tolua_function(tolua_S,"addTrainingChar",tolua_ocr_ICharacterClassifier_addTrainingChar01);
  tolua_function(tolua_S,"addTrainingChar",tolua_ocr_ICharacterClassifier_addTrainingChar02);
  tolua_function(tolua_S,"finishTraining",tolua_ocr_ICharacterClassifier_finishTraining00);
  tolua_function(tolua_S,"save",tolua_ocr_ICharacterClassifier_save00);
  tolua_function(tolua_S,"save",tolua_ocr_ICharacterClassifier_save01);
  tolua_function(tolua_S,"load",tolua_ocr_ICharacterClassifier_load00);
  tolua_function(tolua_S,"load",tolua_ocr_ICharacterClassifier_load01);
  tolua_function(tolua_S,"best",tolua_ocr_ICharacterClassifier_best00);
  tolua_function(tolua_S,"delete",tolua_ocr_ICharacterClassifier_delete00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"IRecognizeLine","IRecognizeLine","IComponent",tolua_collect_IRecognizeLine);
 #else
 tolua_cclass(tolua_S,"IRecognizeLine","IRecognizeLine","IComponent",NULL);
 #endif
 tolua_beginmodule(tolua_S,"IRecognizeLine");
  tolua_function(tolua_S,"recognizeLine",tolua_ocr_IRecognizeLine_recognizeLine00);
  tolua_function(tolua_S,"startTraining",tolua_ocr_IRecognizeLine_startTraining00);
  tolua_function(tolua_S,"addTrainingLine",tolua_ocr_IRecognizeLine_addTrainingLine00);
  tolua_function(tolua_S,"finishTraining",tolua_ocr_IRecognizeLine_finishTraining00);
  tolua_function(tolua_S,"save",tolua_ocr_IRecognizeLine_save00);
  tolua_function(tolua_S,"load",tolua_ocr_IRecognizeLine_load00);
  tolua_function(tolua_S,"delete",tolua_ocr_IRecognizeLine_delete00);
  tolua_function(tolua_S,"recognizeLine",tolua_ocr_IRecognizeLine_recognizeLine01);
  tolua_function(tolua_S,"align",tolua_ocr_IRecognizeLine_align00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"IBestPath","IBestPath","",NULL);
 tolua_beginmodule(tolua_S,"IBestPath");
  tolua_function(tolua_S,"bestpath",tolua_ocr_IBestPath_bestpath00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ISearchableFst","ISearchableFst","IGenericFst",NULL);
 tolua_beginmodule(tolua_S,"ISearchableFst");
  tolua_variable(tolua_S,"__IBestPath__",tolua_get_ISearchableFst___IBestPath__,NULL);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_ShortestPathSearchableFst",tolua_ocr_make_ShortestPathSearchableFst00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"IDict","IDict","",tolua_collect_IDict);
 #else
 tolua_cclass(tolua_S,"IDict","IDict","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"IDict");
  tolua_function(tolua_S,"lookup",tolua_ocr_IDict_lookup00);
  tolua_function(tolua_S,"delete",tolua_ocr_IDict_delete00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_WordList",tolua_ocr_make_WordList00);
 tolua_function(tolua_S,"make_Aspell",tolua_ocr_make_Aspell00);
 tolua_function(tolua_S,"make_DictBestPath",tolua_ocr_make_DictBestPath00);
 tolua_function(tolua_S,"binarize_by_range",tolua_ocr_binarize_by_range00);
 tolua_function(tolua_S,"binarize_by_range",tolua_ocr_binarize_by_range01);
 tolua_function(tolua_S,"make_BinarizeBySauvola",tolua_ocr_make_BinarizeBySauvola00);
 tolua_function(tolua_S,"make_BinarizeByRange",tolua_ocr_make_BinarizeByRange00);
 tolua_function(tolua_S,"make_DeskewPageByRAST",tolua_ocr_make_DeskewPageByRAST00);
 tolua_function(tolua_S,"make_TextImageSeg",tolua_ocr_make_TextImageSeg00);
 tolua_function(tolua_S,"make_DocClean",tolua_ocr_make_DocClean00);
 tolua_function(tolua_S,"make_SegmentPageBySmear",tolua_ocr_make_SegmentPageBySmear00);
 tolua_function(tolua_S,"make_SegmentPageBy1CP",tolua_ocr_make_SegmentPageBy1CP00);
 tolua_function(tolua_S,"make_SegmentPageByRAST",tolua_ocr_make_SegmentPageByRAST00);
 tolua_function(tolua_S,"make_SegmentLineByProjection",tolua_ocr_make_SegmentLineByProjection00);
 tolua_function(tolua_S,"make_SegmentLineByCCS",tolua_ocr_make_SegmentLineByCCS00);
 tolua_function(tolua_S,"make_ConnectedComponentSegmenter",tolua_ocr_make_ConnectedComponentSegmenter00);
 tolua_function(tolua_S,"make_CurvedCutSegmenter",tolua_ocr_make_CurvedCutSegmenter00);
 tolua_function(tolua_S,"make_SkelSegmenter",tolua_ocr_make_SkelSegmenter00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"RegionExtractor","RegionExtractor","",tolua_collect_RegionExtractor);
 #else
 tolua_cclass(tolua_S,"RegionExtractor","RegionExtractor","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"RegionExtractor");
  tolua_function(tolua_S,"new",tolua_ocr_RegionExtractor_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_RegionExtractor_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_RegionExtractor_new00_local);
  tolua_function(tolua_S,"setImage",tolua_ocr_RegionExtractor_setImage00);
  tolua_function(tolua_S,"setImageMasked",tolua_ocr_RegionExtractor_setImageMasked00);
  tolua_function(tolua_S,"setPageColumns",tolua_ocr_RegionExtractor_setPageColumns00);
  tolua_function(tolua_S,"setPageParagraphs",tolua_ocr_RegionExtractor_setPageParagraphs00);
  tolua_function(tolua_S,"setPageLines",tolua_ocr_RegionExtractor_setPageLines00);
  tolua_function(tolua_S,"length",tolua_ocr_RegionExtractor_length00);
  tolua_function(tolua_S,"bbox",tolua_ocr_RegionExtractor_bbox00);
  tolua_function(tolua_S,"bounds",tolua_ocr_RegionExtractor_bounds00);
  tolua_function(tolua_S,"x0",tolua_ocr_RegionExtractor_x000);
  tolua_function(tolua_S,"y0",tolua_ocr_RegionExtractor_y000);
  tolua_function(tolua_S,"x1",tolua_ocr_RegionExtractor_x100);
  tolua_function(tolua_S,"y1",tolua_ocr_RegionExtractor_y100);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract00);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract01);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract02);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract03);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract04);
  tolua_function(tolua_S,"extract",tolua_ocr_RegionExtractor_extract05);
  tolua_function(tolua_S,"mask",tolua_ocr_RegionExtractor_mask00);
  tolua_function(tolua_S,"mask",tolua_ocr_RegionExtractor_mask01);
  tolua_function(tolua_S,"mask",tolua_ocr_RegionExtractor_mask02);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"debug_array",tolua_ocr_debug_array00);
 tolua_function(tolua_S,"debug_array",tolua_ocr_debug_array01);
 tolua_function(tolua_S,"debug_array",tolua_ocr_debug_array02);
 tolua_function(tolua_S,"check_line_segmentation",tolua_ocr_check_line_segmentation00);
 tolua_function(tolua_S,"check_page_segmentation",tolua_ocr_check_page_segmentation00);
 tolua_function(tolua_S,"sort_by_xcenter",tolua_ocr_sort_by_xcenter00);
 tolua_cclass(tolua_S,"IGrouper","IGrouper","",NULL);
 tolua_beginmodule(tolua_S,"IGrouper");
  tolua_variable(tolua_S,"maxrange",tolua_get_IGrouper_maxrange,tolua_set_IGrouper_maxrange);
  tolua_variable(tolua_S,"maxdist",tolua_get_IGrouper_maxdist,tolua_set_IGrouper_maxdist);
  tolua_function(tolua_S,"setSegmentation",tolua_ocr_IGrouper_setSegmentation00);
  tolua_function(tolua_S,"length",tolua_ocr_IGrouper_length00);
  tolua_function(tolua_S,"getMask",tolua_ocr_IGrouper_getMask00);
  tolua_function(tolua_S,"boundingBox",tolua_ocr_IGrouper_boundingBox00);
  tolua_function(tolua_S,"extract",tolua_ocr_IGrouper_extract00);
  tolua_function(tolua_S,"extract",tolua_ocr_IGrouper_extract01);
  tolua_function(tolua_S,"extract",tolua_ocr_IGrouper_extract02);
  tolua_function(tolua_S,"extract",tolua_ocr_IGrouper_extract03);
  tolua_function(tolua_S,"setClass",tolua_ocr_IGrouper_setClass00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_StandardGrouper",tolua_ocr_make_StandardGrouper00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"Pages","Pages","",tolua_collect_Pages);
 #else
 tolua_cclass(tolua_S,"Pages","Pages","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"Pages");
  tolua_function(tolua_S,"new",tolua_ocr_Pages_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_Pages_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_Pages_new00_local);
  tolua_function(tolua_S,"clear",tolua_ocr_Pages_clear00);
  tolua_function(tolua_S,"addFile",tolua_ocr_Pages_addFile00);
  tolua_function(tolua_S,"parseSpec",tolua_ocr_Pages_parseSpec00);
  tolua_function(tolua_S,"wantGray",tolua_ocr_Pages_wantGray00);
  tolua_function(tolua_S,"wantColor",tolua_ocr_Pages_wantColor00);
  tolua_function(tolua_S,"setAutoInvert",tolua_ocr_Pages_setAutoInvert00);
  tolua_function(tolua_S,"setBinarizer",tolua_ocr_Pages_setBinarizer00);
  tolua_function(tolua_S,"length",tolua_ocr_Pages_length00);
  tolua_function(tolua_S,"getPage",tolua_ocr_Pages_getPage00);
  tolua_function(tolua_S,"nextPage",tolua_ocr_Pages_nextPage00);
  tolua_function(tolua_S,"rewind",tolua_ocr_Pages_rewind00);
  tolua_function(tolua_S,"loadImage",tolua_ocr_Pages_loadImage00);
  tolua_function(tolua_S,"getFileName",tolua_ocr_Pages_getFileName00);
  tolua_function(tolua_S,"hasGray",tolua_ocr_Pages_hasGray00);
  tolua_function(tolua_S,"hasColor",tolua_ocr_Pages_hasColor00);
  tolua_function(tolua_S,"getBinary",tolua_ocr_Pages_getBinary00);
  tolua_function(tolua_S,"getGray",tolua_ocr_Pages_getGray00);
  tolua_function(tolua_S,"getColor",tolua_ocr_Pages_getColor00);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"RecognizedPage","RecognizedPage","",tolua_collect_RecognizedPage);
 #else
 tolua_cclass(tolua_S,"RecognizedPage","RecognizedPage","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"RecognizedPage");
  tolua_function(tolua_S,"new",tolua_ocr_RecognizedPage_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_RecognizedPage_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_RecognizedPage_new00_local);
  tolua_function(tolua_S,"delete",tolua_ocr_RecognizedPage_delete00);
  tolua_function(tolua_S,"setLinesCount",tolua_ocr_RecognizedPage_setLinesCount00);
  tolua_function(tolua_S,"linesCount",tolua_ocr_RecognizedPage_linesCount00);
  tolua_function(tolua_S,"setText",tolua_ocr_RecognizedPage_setText00);
  tolua_function(tolua_S,"text",tolua_ocr_RecognizedPage_text00);
  tolua_function(tolua_S,"setCosts",tolua_ocr_RecognizedPage_setCosts00);
  tolua_function(tolua_S,"costs",tolua_ocr_RecognizedPage_costs00);
  tolua_function(tolua_S,"bbox",tolua_ocr_RecognizedPage_bbox00);
  tolua_function(tolua_S,"setBbox",tolua_ocr_RecognizedPage_setBbox00);
  tolua_function(tolua_S,"width",tolua_ocr_RecognizedPage_width00);
  tolua_function(tolua_S,"height",tolua_ocr_RecognizedPage_height00);
  tolua_function(tolua_S,"setWidth",tolua_ocr_RecognizedPage_setWidth00);
  tolua_function(tolua_S,"setHeight",tolua_ocr_RecognizedPage_setHeight00);
  tolua_function(tolua_S,"description",tolua_ocr_RecognizedPage_description00);
  tolua_function(tolua_S,"setDescription",tolua_ocr_RecognizedPage_setDescription00);
  tolua_function(tolua_S,"timeReport",tolua_ocr_RecognizedPage_timeReport00);
  tolua_function(tolua_S,"setTimeReport",tolua_ocr_RecognizedPage_setTimeReport00);
 tolua_endmodule(tolua_S);
 tolua_constant(tolua_S,"M_PI",M_PI);
 tolua_function(tolua_S,"str2array",tolua_ocr_str2array00);
 tolua_function(tolua_S,"array2str",tolua_ocr_array2str00);
 tolua_function(tolua_S,"make_NewBpnetLineOCR",tolua_ocr_make_NewBpnetLineOCR00);
 tolua_function(tolua_S,"make_NewGroupingLineOCR",tolua_ocr_make_NewGroupingLineOCR00);
 tolua_function(tolua_S,"make_GLineRec",tolua_ocr_make_GLineRec00);
 tolua_function(tolua_S,"replace_values",tolua_ocr_replace_values00);
 tolua_function(tolua_S,"replace_values",tolua_ocr_replace_values01);
 tolua_function(tolua_S,"replace_values",tolua_ocr_replace_values02);
 tolua_function(tolua_S,"evaluate_segmentation",tolua_ocr_evaluate_segmentation00);
 tolua_function(tolua_S,"ocr_result_to_charseg",tolua_ocr_ocr_result_to_charseg00);
 tolua_function(tolua_S,"ocr_bboxes_to_charseg",tolua_ocr_ocr_bboxes_to_charseg00);
 tolua_function(tolua_S,"pseg_pixel",tolua_ocr_pseg_pixel00);
 tolua_function(tolua_S,"pseg_pixel",tolua_ocr_pseg_pixel01);
 tolua_function(tolua_S,"pseg_column",tolua_ocr_pseg_column00);
 tolua_function(tolua_S,"pseg_paragraph",tolua_ocr_pseg_paragraph00);
 tolua_function(tolua_S,"pseg_line",tolua_ocr_pseg_line00);
 tolua_function(tolua_S,"pseg_pline",tolua_ocr_pseg_pline00);
 tolua_function(tolua_S,"cseg_pixel",tolua_ocr_cseg_pixel00);
 tolua_function(tolua_S,"pseg_columns",tolua_ocr_pseg_columns00);
 tolua_function(tolua_S,"pseg_plines",tolua_ocr_pseg_plines00);
 tolua_function(tolua_S,"hex",tolua_ocr_hex00);
 tolua_function(tolua_S,"as_intarray",tolua_ocr_as_intarray00);
 tolua_function(tolua_S,"as_intarray",tolua_ocr_as_intarray01);
 tolua_function(tolua_S,"as_intarray",tolua_ocr_as_intarray02);
 tolua_function(tolua_S,"as_string",tolua_ocr_as_string00);
 tolua_function(tolua_S,"as_string",tolua_ocr_as_string01);
 tolua_function(tolua_S,"as_string",tolua_ocr_as_string02);
 tolua_function(tolua_S,"utf32",tolua_ocr_utf3200);
 tolua_function(tolua_S,"utf8",tolua_ocr_utf800);
 tolua_cclass(tolua_S,"ICharacter","ICharacter","",NULL);
 tolua_beginmodule(tolua_S,"ICharacter");
  tolua_function(tolua_S,"image",tolua_ocr_ICharacter_image00);
  tolua_function(tolua_S,"get_image",tolua_ocr_ICharacter_get_image00);
  tolua_function(tolua_S,"code",tolua_ocr_ICharacter_code00);
  tolua_function(tolua_S,"xHeight",tolua_ocr_ICharacter_xHeight00);
  tolua_function(tolua_S,"baseline",tolua_ocr_ICharacter_baseline00);
  tolua_function(tolua_S,"descender",tolua_ocr_ICharacter_descender00);
  tolua_function(tolua_S,"ascender",tolua_ocr_ICharacter_ascender00);
  tolua_function(tolua_S,"info",tolua_ocr_ICharacter_info00);
 tolua_endmodule(tolua_S);
 tolua_cclass(tolua_S,"ICharacterLibrary","ICharacterLibrary","IComponent",NULL);
 tolua_beginmodule(tolua_S,"ICharacterLibrary");
  tolua_function(tolua_S,"sectionsCount",tolua_ocr_ICharacterLibrary_sectionsCount00);
  tolua_function(tolua_S,"switchToSection",tolua_ocr_ICharacterLibrary_switchToSection00);
  tolua_function(tolua_S,"currentSectionIndex",tolua_ocr_ICharacterLibrary_currentSectionIndex00);
  tolua_function(tolua_S,"charactersCount",tolua_ocr_ICharacterLibrary_charactersCount00);
  tolua_function(tolua_S,"character",tolua_ocr_ICharacterLibrary_character00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_slice_charlib",tolua_ocr_make_slice_charlib00);
 tolua_function(tolua_S,"make_filter_charlib",tolua_ocr_make_filter_charlib00);
 tolua_function(tolua_S,"make_grid_charlib",tolua_ocr_make_grid_charlib00);
 tolua_function(tolua_S,"make_uw3_charlib",tolua_ocr_make_uw3_charlib00);
 tolua_function(tolua_S,"make_screenocr_charlib",tolua_ocr_make_screenocr_charlib00);
 tolua_function(tolua_S,"make_pnglist_charlib",tolua_ocr_make_pnglist_charlib00);
 tolua_function(tolua_S,"make_ocropus_charlib",tolua_ocr_make_ocropus_charlib00);
 tolua_function(tolua_S,"make_SegmentationCharlib",tolua_ocr_make_SegmentationCharlib00);
 tolua_function(tolua_S,"make_SegmentationCharlib",tolua_ocr_make_SegmentationCharlib01);
 tolua_function(tolua_S,"parse_vector",tolua_ocr_parse_vector00);
 tolua_function(tolua_S,"get_version_string",tolua_ocr_get_version_string00);
 tolua_function(tolua_S,"set_version_string",tolua_ocr_set_version_string00);
 tolua_function(tolua_S,"hardcoded_version_string",tolua_ocr_hardcoded_version_string00);
 tolua_function(tolua_S,"concat_segmentation",tolua_ocr_concat_segmentation00);
 tolua_function(tolua_S,"remove_small_components",tolua_ocr_remove_small_components00);
 tolua_function(tolua_S,"remove_marginal_components",tolua_ocr_remove_marginal_components00);
 tolua_function(tolua_S,"remove_small_components",tolua_ocr_remove_small_components01);
 tolua_function(tolua_S,"remove_marginal_components",tolua_ocr_remove_marginal_components01);
 tolua_function(tolua_S,"runlength_histogram",tolua_ocr_runlength_histogram00);
 tolua_function(tolua_S,"find_median",tolua_ocr_find_median00);
 tolua_function(tolua_S,"make_background_white",tolua_ocr_make_background_white00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"Classifier","Classifier","",tolua_collect_Classifier);
 #else
 tolua_cclass(tolua_S,"Classifier","Classifier","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"Classifier");
  tolua_function(tolua_S,"delete",tolua_ocr_Classifier_delete00);
  tolua_function(tolua_S,"param",tolua_ocr_Classifier_param00);
  tolua_function(tolua_S,"add",tolua_ocr_Classifier_add00);
  tolua_function(tolua_S,"score",tolua_ocr_Classifier_score00);
  tolua_function(tolua_S,"start_training",tolua_ocr_Classifier_start_training00);
  tolua_function(tolua_S,"start_classifying",tolua_ocr_Classifier_start_classifying00);
  tolua_function(tolua_S,"seal",tolua_ocr_Classifier_seal00);
  tolua_function(tolua_S,"save",tolua_ocr_Classifier_save00);
  tolua_function(tolua_S,"load",tolua_ocr_Classifier_load00);
  tolua_function(tolua_S,"save",tolua_ocr_Classifier_save01);
  tolua_function(tolua_S,"load",tolua_ocr_Classifier_load01);
 tolua_endmodule(tolua_S);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"Density","Density","",tolua_collect_Density);
 #else
 tolua_cclass(tolua_S,"Density","Density","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"Density");
  tolua_function(tolua_S,"delete",tolua_ocr_Density_delete00);
  tolua_function(tolua_S,"param",tolua_ocr_Density_param00);
  tolua_function(tolua_S,"add",tolua_ocr_Density_add00);
  tolua_function(tolua_S,"logp",tolua_ocr_Density_logp00);
  tolua_function(tolua_S,"start_training",tolua_ocr_Density_start_training00);
  tolua_function(tolua_S,"start_classifying",tolua_ocr_Density_start_classifying00);
  tolua_function(tolua_S,"seal",tolua_ocr_Density_seal00);
  tolua_function(tolua_S,"save",tolua_ocr_Density_save00);
  tolua_function(tolua_S,"load",tolua_ocr_Density_load00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"make_AdaptClassifier",tolua_ocr_make_AdaptClassifier00);
 tolua_function(tolua_S,"make_BpnetClassifier",tolua_ocr_make_BpnetClassifier00);
 tolua_function(tolua_S,"make_MixturesClassifier",tolua_ocr_make_MixturesClassifier00);
 tolua_function(tolua_S,"make_BpnetMixturesClassifier",tolua_ocr_make_BpnetMixturesClassifier00);
 tolua_function(tolua_S,"make_BpnetMixturesClassifier",tolua_ocr_make_BpnetMixturesClassifier01);
 tolua_function(tolua_S,"set_resource_path",tolua_ocr_set_resource_path00);
 tolua_function(tolua_S,"find_and_load_ICharacterClassifier",tolua_ocr_find_and_load_ICharacterClassifier00);
 tolua_function(tolua_S,"find_and_load_IRecognizeLine",tolua_ocr_find_and_load_IRecognizeLine00);
 tolua_function(tolua_S,"extract_segment",tolua_ocr_extract_segment00);
 tolua_function(tolua_S,"make_StandardFst",tolua_ocr_make_StandardFst00);
 tolua_function(tolua_S,"beam_search",tolua_ocr_beam_search00);
 tolua_function(tolua_S,"degrade",tolua_ocr_degrade00);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"Logger","Logger","",tolua_collect_Logger);
 #else
 tolua_cclass(tolua_S,"Logger","Logger","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"Logger");
  tolua_variable(tolua_S,"enabled",tolua_get_Logger_enabled,tolua_set_Logger_enabled);
  tolua_function(tolua_S,"new",tolua_ocr_Logger_new00);
  tolua_function(tolua_S,"new_local",tolua_ocr_Logger_new00_local);
  tolua_function(tolua_S,".call",tolua_ocr_Logger_new00_local);
  tolua_function(tolua_S,"recolor",tolua_ocr_Logger_recolor00);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log00);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log01);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log02);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log03);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log04);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log05);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log06);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log07);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log08);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log09);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log10);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log11);
  tolua_function(tolua_S,"log",tolua_ocr_Logger_log12);
  tolua_function(tolua_S,"indent",tolua_ocr_Logger_indent00);
  tolua_function(tolua_S,"dedent",tolua_ocr_Logger_dedent00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"set_logger_directory",tolua_ocr_set_logger_directory00);
 tolua_function(tolua_S,"visualize_segmentation_by_RAST",tolua_ocr_visualize_segmentation_by_RAST00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_ocr (lua_State* tolua_S) {
 return tolua_ocr_open(tolua_S);
};
#endif

