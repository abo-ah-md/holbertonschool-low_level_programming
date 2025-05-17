#include "main.h"
#include <stdio.h>
/**
*print_number - prints an intger
*@n: number
*/
void print_number(int n)
{
unsigned int num;
char c;
if (n < 0)
{
_putchar('-');
num = -n;
}
else
{
num = n;
}
if (num / 10)
print_number(num / 10);
c = '0' + (num % 10);
_putchar(c);

}
