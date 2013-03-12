//
//  Acceleration.cpp
//  Game Engine
//
//  Created by PinionStudios on 3/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#include "Acceleration.h"

Acceleration::Acceleration()
{
    acceleration = 0;
    initialVelocity = 0;
    finalVelocity = 0;
    time = 0;
}
Acceleration::Acceleration(double initialVelocity,double finalVelocity,double time)
{
    acceleration = (finalVelocity - initialVelocity)/time;
}
Acceleration::Acceleration(double initialVelocity, double finalVelocity, double acceleration, double time)
{
    this->initialVelocity = initialVelocity;
    this->finalVelocity = finalVelocity;
    this->time = time;
    this->acceleration = acceleration;
}
void Acceleration::setAcceleration(double acceleration)
{
    this->acceleration = acceleration;
}
double Acceleration::getAcceleration() const
{
    return 0.0;
}
void Acceleration::setInitialVelocity(double initialVelocity)
{
    this->initialVelocity = initialVelocity;
}
double getInitialVelocity()
{
    return 0.0;
}
void Acceleration::setFinalVelocity(double finalVelocity)
{
    this->finalVelocity = finalVelocity;
}
double Acceleration::getFinalVelocity() const
{
    return finalVelocity;
}