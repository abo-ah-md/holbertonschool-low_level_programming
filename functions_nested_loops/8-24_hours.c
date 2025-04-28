#include "main.h"

/**
*jack_bauer- PRINTS THE ABDULUTE VALUE OF ANUMBER NUMBER
*48 - 57
*
*/
void jack_bauer(void)
{
char number1 = '0';
char number2 = '0';
char number3 = '0';
char number4 = '0';
char points = ':';

int i;
for (i = 0; i<= 1440 ;i++ )
{

if (number4 != '9' && number3 != '6'  )
{
_putchar(number1);
_putchar(number2);
_putchar(points);
_putchar(number3);
_putchar(number4);
_putchar('\n');
}
if (number4 != '9')
{
number4++;
}

if (number3 != '5')
{
number3++
}


if (number4 == '9')
{
_putchar(number1);
_putchar(number2);
_putchar(points);
_putchar(number3);
_putchar(number4);
_putchar('\n');
number4 = '0';
}
}
}
