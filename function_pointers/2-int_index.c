#include <stddef.h>
#include <stdio.h>
/**
*int_index- searches for an integer.
*@array: an array of int
*@size: size of array
*@cmp: a function pointer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int j;
if (size <= 0)
return (-1);
for (i = 0; i < size; i++) {
j = cmp(array[i]);
if (cmp(array[i]) != 0)
return (i);
}
if (j == 0)
return (-1);
}
