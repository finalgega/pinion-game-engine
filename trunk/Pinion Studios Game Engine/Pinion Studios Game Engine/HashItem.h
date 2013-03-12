//
//  HashItem.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_HashItem_h
#define Game_Engine_HashItem_h

template <class Aaron>
class HashItem {
private:
    int key;
    Aaron obj;
public:
    HashItem() : key(0)
    {
    }
    ~HashItem()
    {
    }
    
    int getKey()
    {
        return key;
    }
    
    void setKey(int key)
    {
        this->key = key;
    }
    
    Aaron getObject()
    {
        return obj;
    }
    
    void setObject(Aaron obj)
    {
        this->obj = obj;
    }
    
    bool operator==(HashItem &item)
    {
        if (key == item->getKey()) {
            return true;
        }
        return false;
    }
    
    void operator=(HashItem item)
    {
        key = item->getKey();
        obj = item->getObject();
    }
};

#endif
