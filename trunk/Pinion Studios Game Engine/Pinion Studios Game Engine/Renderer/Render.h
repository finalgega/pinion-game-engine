//
//  render.h
//  Game Engine
//
//  Created by PinionStudios on 3/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//
//  This class is a prototype and is prone to changes.
#ifndef Game_Engine_Render_h
#define Game_Engine_Render_h
#include "../common.h"
#include "Vertex.h"

using namespace std;

class Render {
    vector<int> drawData;
    Vertex vertex[256];
public:
    Render();
    ~Render();
    void load(char* filename);
    void draw(char* filename);
    void draw(vector<int> drawData);
    
    
};
#endif
