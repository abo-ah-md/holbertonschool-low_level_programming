#include "main.h"
#include <stdio.h>
/**
*print_number - prints an intger
*@n: number
*/
void print_number(int n);
{
char c;
if (n < 0)
{
_putchar("-");
n = -n;
}
if (n / 10)
{
print_number(n / 10);
c = '0' + (n % 10);
_putchar(c);
}
}
