#include <stdio.h>
/* more headers goes there */

/**
* main - generate combanation of 2 digits
*
*
* Return: 0
*/
int main(void)
{
int i = 0;
for (i; i <= 9; i++)
{
int j = i + 1;
for (j; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');

if (i != 8)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
}
return (0);
}
