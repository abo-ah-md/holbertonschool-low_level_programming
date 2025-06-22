#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*flip_bits - get requried bit to flip to get from n to m
*@n:bit source
*@m:bit distanation
*Return:returns the number of bits needed to flip to get from one n to m
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int count = 0;
while (xor)
{
count += xor & 1;
xor >>= 1;
}

return (count);
}
