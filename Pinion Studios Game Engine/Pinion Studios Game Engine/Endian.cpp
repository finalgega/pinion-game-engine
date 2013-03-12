//
//  Endian.cpp
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include "Endian.h"
using namespace std;
enum PS_ENDIAN_TYPE {
    PS_ENDIAN_UNKNOWN = 0,
    PS_ENDIAN_BIG = 1,
    PS_ENDIAN_MIDDLE = 2,
    PS_ENDIAN_LITTLE = 3
    };
Endian::Endian()
{
    m_systemEndian = PS_ENDIAN_UNKNOWN;
    unsigned long data = 0x12345678;
    unsigned char* c_ptr = (unsigned char*)&data;
    
    if (*c_ptr == 0x12 && *(c_ptr + 1) == 0x34 && *(c_ptr + 2) == 0x56 && *(c_ptr + 3) == 0x78) 
    {
        m_systemEndian = PS_ENDIAN_BIG;
    }
    else if(*c_ptr == 0x78 && *(c_ptr + 1) == 0x56 && *(c_ptr + 2) == 0x34 && *(c_ptr + 3) == 0x12)
    {
        m_systemEndian = PS_ENDIAN_LITTLE;
    }
    else if(*c_ptr == 0x34 && *(c_ptr + 1) == 0x12 && *(c_ptr + 2) == 0x78 && *(c_ptr + 3) == 0x56)
    {
        m_systemEndian = PS_ENDIAN_MIDDLE;
    }
    else
    {
        m_systemEndian = PS_ENDIAN_UNKNOWN;
    }
}
Endian::~Endian()
{
    
}

void Endian::resolveEndian(char* data, int size,PS_ENDIAN_TYPE inputEndian)
{
    
}

void Endian::swapBytes(char* data, int size)
{
    assert((size & 1) == 0);  
    
    char* c_ptr = data;
    char temp = 0;
    int j = 0;
//    for(int i = 0; (j = size - 1); (i < size / 2) : i++,j--)
//    {
//        
//    }
}
void Endian::swapBytes(char* data, int size, int number)
{
    
}

Endian::PS_ENDIAN_TYPE Endian::getEndianType()
{
    return m_systemEndian;
}
