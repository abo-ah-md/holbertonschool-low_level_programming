#include "main.h"
#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
int i;
unsigned long fib0_low = 1, fib1_low = 2, new_low;
unsigned long fib0_high = 0, fib1_high = 0, new_high;
unsigned long base = 1000000000;

printf("%lu, %lu", fib0_low, fib1_low);

for (i = 2; i < 98; i++)
{
new_low = fib0_low + fib1_low;
new_high = fib0_high + fib1_high;

if (new_low >= base)
{
new_low -= base;
new_high++;
}

if (new_high > 0)
printf(", %lu%09lu", new_high, new_low);
else
printf(", %lu", new_low);
fib0_low = fib1_low;
fib0_high = fib1_high;
fib1_low = new_low;
fib1_high = new_high;
}
printf("\n");
return (0);
}
