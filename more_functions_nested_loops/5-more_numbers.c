#include "main.h"
/**
*more_numbers - print from 0 to 14 |10 times| with new line
*
*Return: void
*
*
*/
void more_numbers(void)
{
int i, j;
int check = 0;
for (j = 0; j <= 9; j++)
{
check = 0;
for (i = 48; i < 59 ; i++)
{
if (i == 58)
{
check = 1;
i = 48;
}
if (check == 1)
{
if (i == 53)
{
break;
}
_putchar(49);
}
_putchar(i);
}
_putchar('\n');
}
}
