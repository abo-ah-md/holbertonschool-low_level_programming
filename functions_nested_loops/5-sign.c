#include "main.h"

/**
*_isalpha - check and prints if the alphabet in lowercase
*@n:the number to check
*Return: 0 or 1 or -1
*/
int print_sign(int n);
{

if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (1);
}
if (n > 0)
{
_putchar('+');
return (1);
}
}
