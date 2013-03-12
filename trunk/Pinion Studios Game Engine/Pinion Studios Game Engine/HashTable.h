//
//  HashTable.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_HashTable_h
#define Game_Engine_HashTable_h
#include <vector>
#include <iostream>
#include <string>
#include "HashItem.h"
using namespace std;

template <class Aaron>
class HashTable {
private:
    vector<HashTable<Aaron> *m_table;
    int m_size;
public:
    HashTable(int size) : m_size(0)
    {
        if(size > 0)
        {
            m_size = size;
            m_table = new vector<HashItem<Aaron> > [m_size];
        }
    }
    
    virtual ~HashTable()
    {
        m_size = 0;
        
        if(m_table != NULL)
        {
            delete[] m_table;
            m_table = NULL:
        }
    }
    
    void insertHash(HashItem<Aaron> &obj)
    {
        int hash = hashFunction(obj.getKey());
        m_table[hash].pushBack(obj);
    }
    
    void deleteHash(int key)
    {
        HashItem<Aaron> item;
        item.setKey(key);
        
        int hash = hashFunction(key);
        
        vector<HashItem<Aaron>> *hsh_ptr = &m_table[hash];
        vector<HashItem<Aaron> > ::iterator it;
        
        for(it = hsh_ptr->begin(); it != hsh_ptr->end(); it++)
        {
            if(*it == item)
            {
                hsh_ptr->erase(it);
                break;
            }
        }
    }
    
    HashItem<Aaron> findHash(int key)
    {
        HashItem<Aaron> item, temp;
        item.setKey(key);
        
        int hash = hashFunction(key);
        vector<HashItem<Aaron> > *hsh_ptr = &m_table[hash];
        
        for(int i = 0; i < (int)hsh_ptr->size(); i++)
        {
            temp = (*hsh_ptr)[i];
            
            if(temp == item)
            {
                return temp;
            }
        }
        item.setKey(-1);
        return item;
    }
    
    int hashFunction(int key)
    {
        return key % m_size;
    }
    
    int hashFunction(string &str)
    {
        int hash = 0;
        for(int i = 0; i < (int)str.size(); i++)
        {
            int val = (int)str[i];
            hash = (hash * 256 + val) %  m_size;
        }
        return hash;
    }
    
    int getSize()
    {
        return m_size;
    }
    
    
};

#endif
