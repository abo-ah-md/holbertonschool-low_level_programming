#include <stdio.h>
#include <string.h>

/**
*get_bit - converts binary to unsigned int
*@n:binary in string format
*@index:binary in string format
*Return:value of the bit at index
*index or -1 if an error occured
**/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
unsigned long int mask;
int started;
started = 0;
if (n == 0)
return (0);
for (i = 63; i != (unsigned int)-1; i--)
{
mask = 1UL << i;
if ((n & mask) != 0)
started = 1;
if (started)
{
if ((n & mask))
{
if (i == index)
return (1);
}
else
{
if (i == index)
return (0);
}
}
}
return (0);
}
