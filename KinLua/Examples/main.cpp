//
// Created by Kin on 2018/9/22 0022.
// Copyright © 2018 jihuisoft. All rights reserved.
//


#include <string>
#include <iostream>
#include <KinLua/LuaEngine.h>

int main()
{
    KinLua::LuaEngine Engine;

    Engine.Run("../../../Examples/testLua.lua");

//
//    auto [Result,var] = Engine["callTest"](5,10);
//
//    std::cout<<"Result is "<<Result<<std::endl;
    return 0;
}