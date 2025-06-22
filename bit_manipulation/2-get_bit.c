#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*get_bit - get the value of bit index of n
*@n:binary in string format
*@index:binary in string format
*Return:value of the bit at index
*index or -1 if an error occured
**/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
return (-1);
return ((n >> index) & 1);
}
