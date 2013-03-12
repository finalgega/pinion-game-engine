//
//  Difficulty.cpp
//  
//
//  Created by Aaron Goy on 8/1/12.
//  Copyright (c) 2012 Pinion Studios. All rights reserved.
//

#include "Difficulty.h"
#include "common.h"
#include <string>
using namespace std;
using namespace PinionEngine;
void Difficulty::set_difficulty(int dif)
{
    this->difficulty_level = dif;
    switch (dif) {
        case 1:
            difficulty_str = BEGINNER;
            break;
        case 2:
        {
            difficulty_str = NOVICE;   
        }
        case 3:
        {
            difficulty_str = EXPERT;
        }
        case 4:
        {
            difficulty_str = IMPOSSIBLE;
        }
            case 5:
        {
            difficulty_str = GAME_PROGRAMMER;
        }
        default:
            difficulty_level = 1;
            break;
    }
}

int Difficulty::get_difficulty()
{
    return difficulty_level;
}

string Difficulty::get_difficulty_string() const
{
    return difficulty_str;
}
//string get_enum_difficulty(enum difficulty)
//{
//    enum d = difficulty;
//    string str_difficulty;
//    switch (d) {
//        case BEGINNER:
//            str_difficulty = "Beginner";
//            break;
//        case NOVICE:
//            str_difficulty = "Novice";
//            break;
//        case EXPERT:
//            str_difficulty = "Expert";
//            break;
//        case IMPOSSIBLE:
//            str_difficulty = "Impossible";
//            break;
//        case:GAME_PROGRAMMER:
//            str_difficulty = "Debug";
//            break;
//        default:
//            return NULL;
//            break;
//    }
//    return str_difficulty;
//}
struct Difficulty {
    string diffDescription;
    int diffInt;
};
