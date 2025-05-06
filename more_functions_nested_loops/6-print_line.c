#include "main.h"
/**
*print_line - print '_' based on n
*@n:numbers of desired lines
*Return: void
*
*/
void print_line(int n)
{
int i;
if (n < 1)
{
_putchar('\n');
}
else
{
for (i = 0 ; i != n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
