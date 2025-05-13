#include <stdio.h>
#include "main.h"
/**
*_sqrt_recursion- returns the length of a string.
*
@n: number
*Return: sqrt of n
*/
int _sqrt_recursion(int n);
int sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return sqrt_helper(n, 0);
}

int sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    if (guess * guess > n)
        return -1;
    return sqrt_helper(n, guess + 1);
}
