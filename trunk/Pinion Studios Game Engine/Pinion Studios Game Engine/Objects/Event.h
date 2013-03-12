//
//  Event.h
//  Game Engine
//
//  Created by PinionStudios on 8/3/13.
//  Copyright (c) 2013 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Event_h
#define Game_Engine_Event_h
#include "Object.h"
#include <string>

using namespace std;

class Event : Object {
    int eventID;
    string eventName;
    string eventDescription;
    bool eventComplete;
    //  Only if CHAIN_EVENT flagged should PREV_EVENT_COMPLETE be flagged
    enum EVENTFLAG
    {
        CHAIN_EVENT,
        PREV_EVENT_COMPLETE,
        REQUIREMENTS_FULFILLED
    };
    
public:
    Event();
    Event(int eventID,string eventName,string eventDescription);
    virtual void display();
    bool isEventAccessible(EVENTFLAG eventFlag);
    
};

#endif
