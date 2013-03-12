//
//  Creatures.cpp
//  PinionEngine
//
//  Created by Aaron Goy on 26/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Creature.h"
#include "Difficulty.h"
using namespace std;
PinionEngine::Creature::Creature()
{
    set_health(0.0);
    set_defense(0.0);
    set_mana(0.0);
    set_offense(0.0);
    set_speed(0.0);
}

PinionEngine::Creature::Creature(string name,double health,double defense,double offense,double speed,double mana)
{
    int factor = 1;
//    if(Difficulty::get_difficulty() != NULL){
//        factor = Difficulty::get_difficulty();}
    this->name = name;
    this->health = health * factor;
    this->defense = defense * factor;
    this->offense = offense * factor;
    this->speed = speed * factor;
    this->mana = mana * factor;
}
PinionEngine::Creature::~Creature()
{
}

void PinionEngine::Creature::set_name(string name)
{
    this->name = name;
}
void PinionEngine::Creature::set_health(double health)
{
    this->health = health;
}

void PinionEngine::Creature::set_defense(double defense)
{
    this->defense = defense;
}

void PinionEngine::Creature::set_offense(double offense)
{
    this->offense = offense;
}
void PinionEngine::Creature::set_speed(double speed)
{
    this->speed = speed;
}
void PinionEngine::Creature::set_mana(double mana)
{
    this->mana = mana;
}

string PinionEngine::Creature::get_name() const
{
    return name;
}

double PinionEngine::Creature::get_health() const
{
    return health;
}

double PinionEngine::Creature::get_defense() const
{
    return defense;
}

double PinionEngine::Creature::get_offense() const
{
    return offense;
}

double PinionEngine::Creature::get_speed() const
{
    return speed;
}

double PinionEngine::Creature::get_mana()const
{
    return mana;
}

void PinionEngine::Creature::display_creature_info() const
{
    cout <<    get_name()  << " stats are : " << endl << "Health : " << get_health() << endl << "Defense : " << get_defense() << endl << "Offense : " << get_offense() << endl << "Speed : " << get_speed() << endl << "Mana : " << get_mana() << endl;
}

