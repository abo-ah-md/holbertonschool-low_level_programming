#include "main.h"
/**
*times_table - PRINTS 24h clock
*48 - 57
*
*/
void times_table(void)
{
int j, i;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
int result = i * j;

if (result > 9)
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(result + '0');
if (j != 9 )
{
_putchar(',');
_putchar(' ');
if (result <10)
{
_putchar(' ');
}
}
}
}
_putchar('\n');
}
}
