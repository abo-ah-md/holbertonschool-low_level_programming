#include "main.h"
/**
*jack_bauer- PRINTS 24h clock
*48 - 57
*
*/
void jack_bauer(void)
{

int hr10 = 0;
int hr0 = 0;
int min10 = 0;
int min0 = 0;
int j, i;
for (i = 0 ; i < 24 ; i++)
{
for (j = 0 ; j < 60; j++)
{
_putchar((hr10 + i) / 10 + '0');
_putchar((hr0 + i) % 10 + '0');
_putchar(':');
_putchar((min10 + j) / 10 + '0');
_putchar((min0 + j) % 10 + '0');
_putchar('\n');
}
}
}
