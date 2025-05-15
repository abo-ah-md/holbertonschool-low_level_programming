#include "main.h"
/**
*print_times_table - PRINTS time table of n
*@n: number
*
*/
void print_times_table(int n)
{
int j;
int i;
int result;

if (n > 15 || n < 0)
return;
for (i = 0; i != n + 1; i++)
{
for (j = 0; j != n + 1; j++)
{
result = i * j;

if (result < 10)
_putchar(result % 10 + '0');

if (result >= 10 && result < 100)
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10 % 10) + '0');
_putchar(result % 10 + '0');
}
if (j != n)
{
_putchar(',');
if (result <= 100)
_putchar(' ');
if (result <= 10)
_putchar(' ');
}
}
_putchar('\n');
}
}
