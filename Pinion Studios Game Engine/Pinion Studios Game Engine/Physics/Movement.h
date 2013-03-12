//
//  Movement.h
//  Game Engine
//
//  Created by Aaron Goy on 8/11/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Movement_h
#define Game_Engine_Movement_h
#include <cmath>

class Movement {
    double x,y,z; //    coordinates on a 3-d cartesian plane
    
public:
    void jump();
    void forward();
    void backward();
    void left();
    void right();
};

#endif
