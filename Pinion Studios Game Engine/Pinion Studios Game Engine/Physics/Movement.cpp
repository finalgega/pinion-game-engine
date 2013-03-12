//
//  Movement.cpp
//  Game Engine
//
//  A simple module to process movement
//  Created by Aaron Goy on 8/11/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  NEEDTO: Bind keys to functions. E.g. spacebar to jump();

#include "Movement.h"

void Movement::jump(){
    int delay = 0;
    y++;
    while (delay < 135) {
        delay++;
    }
    if (delay == 135) {
        y--;
    }
}

void Movement::forward(){
    z++;
}

void Movement::backward(){
    z--;
}

void Movement::left(){
    x--;
}

void Movement::right(){
    x++;
}
