#include "main.h"
#include <stdio.h>
/**
 *print_rev-prints  a string
 *@s: astring
 *
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}

for (i; i >= -1 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
