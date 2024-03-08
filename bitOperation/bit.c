#include <stdio.h>
#include "../include/bit.h"

void getFirstIndexOfSetBit32(unsigned int data, int *index)
{
    int i = 0;

    if (NULL == index)
    {
        return;
    }
    
    for (i = 0; i < 32; i++)
    {
        if (BIT_CHECK(data, i))
        {
            *index = i;
            return;
        }
    }

    *index = -1;
    return;
}