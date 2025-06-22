#include <stdio.h>
#include <string.h>

/**
*print_binary - converts binary to unsigned int
*@n:binary in string format
**/

void print_binary(unsigned long int n)
{
unsigned int i;
unsigned long int mask;
int started;
started = 0;
for (i = 63; i != (unsigned int)-1; i--)
{
mask = 1UL << i;
if ((n & mask) != 0)
started = 1;
if (started)
{
if ((n & mask))
putchar('1');
else
putchar('0');
}
}
}
