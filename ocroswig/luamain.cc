extern "C" {
#include <stdio.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

extern "C" {
extern int luaopen_iulib(lua_State* L);
extern int luaopen_ocropus(lua_State* L);
}

int main(int argc,char* argv[])
{
    lua_State *L;
    if (argc<2)
    {
        printf("%s: <filename.lua>\n",argv[0]);
        return 0;
    }
    L=lua_open();
    luaopen_base(L);
    luaopen_iulib(L);
    luaopen_ocropus(L);
    if(luaL_loadfile(L,argv[1])==0)
        lua_pcall(L,0,0,0);
    else
        printf("unable to load %s\n",argv[1]);
    lua_close(L);
    return 0;
}
