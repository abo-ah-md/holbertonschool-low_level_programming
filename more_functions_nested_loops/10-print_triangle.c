#include "main.h"
/**
*print_triangle - print '#' based on numbers of size
*@size:numbers of desired squares
*Return: void
*
*/
void print_triangle(int size)
{
int i;
int j;
int k;
if (size < 1)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1 ; j <= size - i ; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
