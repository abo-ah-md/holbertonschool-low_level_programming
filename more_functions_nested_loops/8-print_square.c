#include "main.h"
/**
*print_square - print '_' based on n
*@size:numbers of desired squares
*Return: void
*
*/
void print_square(int size)
{
int i;
int j;
if (size < 1)
{
_putchar('\n');
}
else
{
for (i = size ; i != 0; i--)
{
for (j = size; j != 0; j--)
{
_putchar('#');
}
_putchar('\n');

}
}
}
