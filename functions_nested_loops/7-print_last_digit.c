#include "main.h"

/**
*print_last_digit- PRINTS THE ABDULUTE VALUE OF ANUMBER NUMBER
*@n:THE NUMBER TO CHECK
*Return:n last digit
*/
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
n = n % 10;
_putchar('0' + n);
return (n);
}
