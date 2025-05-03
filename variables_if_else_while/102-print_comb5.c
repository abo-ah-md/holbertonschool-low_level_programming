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
for (i = 0; i <= 99; i++)
{
int j;
for (j = i + 1; j <= 99; j++)
{
putchar(i + '0');
putchar(i + '0');
putchar(' ');
putchar(i + '0');
putchar(j + '0');

putchar(',');
putchar(' ');

putchar('\n');
}
}
return (0);
}
