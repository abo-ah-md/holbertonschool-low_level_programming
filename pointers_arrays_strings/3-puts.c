#include "main.h"
#include <stdio.h>
/**
 *_puts-prints  a string
 *@str: astring
 *
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
