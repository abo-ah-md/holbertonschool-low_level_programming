#include "main.h"
/**
*more_numbers - print from 0 to 14 |10 times| with new line
*01234567891090
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
for (i = 48; i < 58 ; i++)
{
if (check == 0)
{
_putchar(i);
}
if (i == 57 || check == 1)
{
if (check == 0)
{
i = 48;
check = 1;
}
_putchar(49);
_putchar(i);
if (i == 52)
{
break;
}
}
}
_putchar('\n');
}
}
