//
//  SteeringOutput.h
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 25/3/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//

#ifndef Pinion_Studios_Game_Engine_SteeringOutput_h
#define Pinion_Studios_Game_Engine_SteeringOutput_h

#include "../common.h"

struct SteeringOutput {
    vector<float> linear;   //  2D or 3D vector
    float angular;  //  single floating point value
};

#endif
