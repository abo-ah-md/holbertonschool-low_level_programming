#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*set_bit - get the value of bit index of n
*@n:binary in string format
*@index:binary in string format
*Return:1 or -1 if an error occured
**/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);
*n |= (1UL << index);
return (1);
}
