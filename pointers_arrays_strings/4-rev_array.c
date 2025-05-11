#include "main.h"
#include <stdio.h>
/**
*reverse_array  - concat arr string to another
*@a: array of numbers
*@n: number of array elements
*/

void reverse_array(int *a, int n)
{
int i = n - 1;
int k  = 0;
int tmp = 0;
while (k < n / 2)
{
tmp = a[k];
a[k] = a[i];
a[i] = tmp;
i--;
k++;
}
}
