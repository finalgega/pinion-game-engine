//
//  Difficulty.h
//  PinionEngine
//
//  Created by Aaron Goy on 2/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef PinionEngine_Difficulty_h
#define PinionEngine_Difficulty_h
#include "common.h"
using namespace std;
namespace PinionEngine
{
/* 
 The Code below defines an enumeration -> a set
 of unsigned int constants
 */
    class Difficulty{
        public:
        enum difficulty {
            BEGINNER = 1,
            NOVICE = 2,
            EXPERT = 3,
            IMPOSSIBLE = 4,
            GAME_PROGRAMMER =5,
        };
        string get_enum_difficulty(enum difficulty);
        void set_difficulty(int dif);
        int get_difficulty();
        string get_difficulty_string() const;
        private:
        int difficulty_level;
        string difficulty_str;

    };
};
#endif
