#include "main.h"
#include <stdio.h>
/**
 *print_rev-prints  a string
 *@s: string
 *
 */
void print_rev(char *s)
{
int i;
for (i = 10 ; i  != 0 ; i--)
{
_putchar(s[-1 -i]);
}
_putchar('\n');
}
