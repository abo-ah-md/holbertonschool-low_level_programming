#include <stdio.h>
#include "main.h"
/**
*_sqrt_recursion- returns the length of a string.
*@n: number
*Return: sqrt of n
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
int root = (_sqrt_recursion(n - 1));
if ((root + 1) * (root + 1) == n)
return (root + 1);
return (root);
}
