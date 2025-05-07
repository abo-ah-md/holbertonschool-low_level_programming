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
int j;
for (i = 0 ; s[i] != '\0'; i++);
for (j = i ; j > -1; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
