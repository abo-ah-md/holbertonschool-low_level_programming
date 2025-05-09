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
i = (i + 1);
}


for (j = i / 2 ; j !=  i; j++)
{
_putchar(str[j]);
}
}
