#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*clear_bit - sets the value of a bit to 0 at a given index.
*@n:binary in string format
*@index: index of bit to sit
*Return:1 or -1 if an error occured
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);
*n &= ~(1UL << index);
return (1);
}
