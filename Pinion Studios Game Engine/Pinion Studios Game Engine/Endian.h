//
//  Endian.h
//  Game Engine
//
//  Created by Aaron Goy on 9/2/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Endian_h
#define Game_Engine_Endian_h

class Endian {
private:
    enum PS_ENDIAN_TYPE {
        PS_ENDIAN_UNKNOWN = 0,
        PS_ENDIAN_BIG = 1,
        PS_ENDIAN_MIDDLE = 2,
        PS_ENDIAN_LITTLE = 3
    };
    PS_ENDIAN_TYPE m_systemEndian;
public:
    Endian();
    virtual ~Endian();
    
    void resolveEndian(char* data, int size,PS_ENDIAN_TYPE inputEndian);
    
    void swapBytes(char* data, int size);
    void swapBytes(char* data, int size, int number);
    
    PS_ENDIAN_TYPE getEndianType();
};

#endif
