#include "bit.h"
#include <stdio.h>

void getFirstIndexOfSetBit32(unsigned int data, int *index)
{
    int i = 0;

    if (NULL == index)
    {
        return;
    }
    
    for (i = 0; i < 32; i++)
    {
        if (data & (1 << i))
        {
            *index = i;
            return;
        }
    }

    *index = -1;
    return;
}