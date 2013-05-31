//
//  declarations.h
//  Game Engine
//
//  Created by Aaron Goy on 9/4/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_definitions_h
#define Game_Engine_definitions_h
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
namespace PinionStudios {

    #define POINTS_PER_VERTEX 3
    #define TOTAL_FLOATS_IN_TRIANGLE 9
    #define KEY_ESCAPE 27
    #define KEY_ENTER 13
    #define POSITION_VALUES_3D 3
    #define POSITION_VALUES_2D 2
    typedef char PS_NETWORK_SOCKET_STATUS;
    typedef float AIOrientationFloat;
    typedef vector<float> PositionFloat3D;
    typedef vector<float> PositionFloat2D;
    typedef float rotationFloat;
    typedef vector<float> velocityFloat2D;
    typedef vector<float> velocityFloat3D;
    typedef float realNum;
    struct PosFloat3D
    {
        int x;
        int y;
        int z;
        void setPosCoordinates(int x,int y,int z);
        PosFloat3D getPosCoordinates() const;
    };

    struct PosFloat2D
    {
        int x;
        int z;
        void setPosCoordinates(int x,int z);
    };
    
    struct DifferentiatedFraction
    {
        double dx;
        double dt;
        void display()
        {
            printf("(%g/%g)",dx,dt);
        }
    };
    
  
    
}
#endif
