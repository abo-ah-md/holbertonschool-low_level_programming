#include "main.h"
#include <stdio.h>
/**
*print_number - copies n elements of an arr to another
*@n: number
*/
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -n;
}
if (num / 10)
print_number(num / 10);
_putchar(num % 10 + '0');
}
