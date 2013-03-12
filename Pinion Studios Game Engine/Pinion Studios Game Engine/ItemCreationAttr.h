//
//  ItemCreationAttr.h
//  Game Engine
//
//  Created by Aaron Goy on 10/1/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//
//  MAY BE MOVED --> PART OF GAME

#ifndef Game_Engine_ItemCreationAttr_h
#define Game_Engine_ItemCreationAttr_h

class ItemCreationAttr {
private:
    enum ICATTRIBUTES {
        SMITHERY,CRAFTING,ALCHEMY,COOKING,ENGINEERING
    };
    
public:
    void setItemCreationAttr(enum ICATTRIBUTES);
    double getItemCreationAttr() const;
    bool checkICSuccess(double ICVal,double evalVal);
    
};

#endif
