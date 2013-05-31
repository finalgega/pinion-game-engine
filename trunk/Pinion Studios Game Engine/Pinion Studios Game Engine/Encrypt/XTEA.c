//
//  XTEA.c
//  Pinion Studios Game Engine
//
//  Created by Aaron Goy on 25/4/13.
//  Copyright (c) 2013 Aaron Goy. All rights reserved.
//
//  v gives the plaintext of 2 words
//  k gives the key of 4 words
//  N gives the number of cycles, 32 is recommended
//  if negative, causes decoding. N must be the same or coding
//  if zero causes no coding or decoding
//  assumes 32 bit "long" and same endian coding or decoding
//

#include <stdio.h>

tean(long *v,long *k,long N)
{
    unsigned long y = v[0],z=v[1],DELTA = 0x9e3779b9;
    unsigned long limit,sum;

    if(N >0)
        {
        limit = DELTA * N;
        sum = 0;
        while (sum != limit)
            {
            y += (z << 4^z >> 5) + z^sum + k[sum&3], sum += DELTA, z += (y << 4^y >> 5) + y^sum + k[sum >> 11&3];
            }
        }else{
            sum = DELTA * (-N);
            while (sum)
                {
                z -= (y << 4^y >> 5) + y^sum + k[sum>>11&3],sum -= DELTA,y -=(z << 4^z >> 5) + z^sum + k[sum&3];
                }
        }
    v[0] = y;
    v[1] = z;
    return;
}œ