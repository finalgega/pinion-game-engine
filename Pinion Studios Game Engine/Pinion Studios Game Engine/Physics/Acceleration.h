//
//  Header.h
//  Game Engine
//
//  Created by Aaron Goy on 9/18/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Acceleration_h
#define Game_Engine_Acceleration_h

class Acceleration {
private:
    double initialVelocity;
    double finalVelocity;
    double acceleration;
    double time;
    
public:
    Acceleration();
    Acceleration(double initialVelocity,double finalVelocity,double time);
    Acceleration(double initialVelocity, double finalVelocity, double acceleration, double time);
    void setAcceleration(double acceleration);
    double getAcceleration() const;
    void setInitialVelocity(double initialVelocity);
    double getInitialVelocity() const;
    void setFinalVelocity(double finalVelocity);
    double getFinalVelocity() const;
};


#endif
