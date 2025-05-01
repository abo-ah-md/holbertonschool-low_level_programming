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
for (i; i <= 81; i++)
{
putchar(i + '0');
if(i + 1 == 10)
{
putchar(i + '0');
}
else
putchar((i + 1) + '0');
putchar(',');
putchar(' ');
}
return (0);
}
