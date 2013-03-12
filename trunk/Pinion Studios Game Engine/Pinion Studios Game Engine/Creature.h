//
//  Creature.h
//  PinionEngine
//
//  Created by Aaron Goy on 26/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#pragma once
#ifndef PinionEngine_CREATURE_H
#define PinionEngine_CREATURE_H
#include <string>
#include "common.h"
#include "Difficulty.h"
using namespace std;
namespace PinionEngine {
	class Creature {
	double health,defense,offense,speed,mana;
        string name;
	
public:
		Creature();
		Creature(string name, double health,double defense,double offense,double speed,double mana);
		~Creature();
        void set_name(string name);
		void set_health(double health);
		void set_defense(double defense);
		void set_offense(double offense);
		void set_speed(double speed);
		void set_mana(double mana);
        string get_name() const;
		double get_health() const;
		double get_defense() const;
		double get_offense() const;
		double get_speed() const;
		double get_mana()const;
        void display_creature_info() const;
};

}
#endif
