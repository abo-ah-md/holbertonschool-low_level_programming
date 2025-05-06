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
int j;
while (s[i] != '\0')
{
i++;
}
for (j = i; j != 1  ; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
