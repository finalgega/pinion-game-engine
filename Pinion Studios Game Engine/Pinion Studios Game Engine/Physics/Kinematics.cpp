//
//  Kinematics.cpp
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 23/3/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//
#include "Kinematics.h"
#include "../common.h"
using namespace std;
Kinematics::Kinematics()
{
//    for_each(velocity.begin(), velocity.end(), &Kinematics::initialize);
//    for_each(position.begin(), position.end(), &Kinematics::initialize);
//    initialize(rotation);
//    initialize(orientation);
}
Kinematics::Kinematics(PositionFloat2D position,AIOrientationFloat orientation,velocityFloat2D velocity,rotationFloat rotation)
{
//    for (int i = 0; i < position.size(); i++) {
//        position.at(i) = position.at(i);
//    }
//    for (int i = 0; i < velocity.size(); i++) {
//        velocity.at(i) = velocity.at(i);
//    }
//    rotation = rotation;
//    orientation = orientation;
}
Kinematics::~Kinematics()
{
    delete this;
}
void Kinematics::initialize(float f)
{
    f = 0.0f;
}