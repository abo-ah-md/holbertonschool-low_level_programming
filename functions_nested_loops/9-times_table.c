#include "main.h"
/**
*times_table - PRINTS 24h clock
*48 - 57
*
*/
void times_table(void)
{
int j, i;
for (i = 48 ; i < 57 ; i++)
{
_putchar('\n');
for (j = 48 ; j <= 57 ; j++)
{
_putchar(j);

_putchar(',');
_putchar(' ');
}
}
}
