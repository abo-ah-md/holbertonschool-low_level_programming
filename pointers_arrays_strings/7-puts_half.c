#include "main.h"
#include <stdio.h>
/**
*puts_half - revrese  a string
*@str: string
*
*/
void puts_half(char *str)
{
int i;
int j;
for (i = 0 ; str[i] != '\0'; i++)
{}
if (i % 2 != 0)
{
i++;
}
for (j = 0; j != i; j++)
{
if (j >= i / 2)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
