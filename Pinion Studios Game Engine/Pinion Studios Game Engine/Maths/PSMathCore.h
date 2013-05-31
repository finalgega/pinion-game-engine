//
//  PSMathCore.h
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 21/3/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//

#ifndef Pinion_Studios_Game_Engine_PSMathCore_h
#define Pinion_Studios_Game_Engine_PSMathCore_h
#include "../definitions.h"
#include <cmath>
namespace PinionStudios {

    /**
     *  Holds the value for energy under which a body will be put to
     *  sleep. This is a global value for the whole solution. By
     *  default it is 0.1, which is fine for simulation when gravity is
     *  about 20 units per second squared, masses are about one, and
     *  other forces are around that of gravity. It may need tweaking
     *  if simulation is drastically different to this.
     */
    extern realNum sleepEpsilon;
    
}

#endif
