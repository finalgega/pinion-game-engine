//
//  Object.h
//  Game Engine
//
//  Created by PinionStudios on 8/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Object_h
#define Game_Engine_Object_h
#include <string>

using namespace std;

class Object {
    string objectName;
    int objectID;
    string objectDescription;
    
public:
    Object();
    Object(int objectID,string objectName,string objectDescription);
    virtual void display();
};

#endif
