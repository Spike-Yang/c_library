#ifndef BIT_H
#define BIT_H

/// @brief get index of first set bit data which is 8/16/32bits. 
/// @param data the data of 8/16/32bits
/// @param index the index of first set bit. 0-31.
void getFirstIndexOfSetBit32(unsigned int data, int *index);

#endif