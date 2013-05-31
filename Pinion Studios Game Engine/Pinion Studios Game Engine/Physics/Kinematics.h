//
//  Kinematics.h
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 23/3/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//

#ifndef __Pinion_Studios_Game_Engine__Kinematics__
#define __Pinion_Studios_Game_Engine__Kinematics__

#include <iostream>
#include "../common.h"
#include "SteeringOutput.h"
using namespace PinionStudios;

class Kinematics {
    PositionFloat2D position;
    AIOrientationFloat orientation;
    velocityFloat2D velocity;
    rotationFloat rotation;
    
public:
    Kinematics();
    Kinematics(PositionFloat2D position,AIOrientationFloat orientation,velocityFloat2D velocity,rotationFloat rotation);
    ~Kinematics();
    void initialize(float f);
};
#endif /* defined(__Pinion_Studios_Game_Engine__Kinematics__) */
