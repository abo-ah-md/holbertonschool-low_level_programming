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
int i;
for (i = 0; i <= 9; i++)
{
int j;
for (j = i + 1; j <= 9; j++)
{
int k;
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');

if (i != 7)
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
}
return (0);
}
