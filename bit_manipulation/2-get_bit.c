#include <stdio.h>
#include <stdlib.h>
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
unsigned int j;
unsigned long int mask;
int started;
int *num_arr;

num_arr = malloc(sizeof(int) * 20);
if (!num_arr)
exit(EXIT_FAILURE);
j = 0;
started = 0;
if (n == 0)
num_arr[j] = 0;

for (i = 63; i != (unsigned int)-1; i--)
{
mask = 1UL << i;
if ((n & mask) != 0)
started = 1;
if (started)
{
if ((n & mask))
{
num_arr[j] = 1;
j++;
}
else
{
num_arr[j] = 0;
j++;
}
}
}
if (index > j)
return (-1);

return (num_arr[index]);

return (-1);
}
