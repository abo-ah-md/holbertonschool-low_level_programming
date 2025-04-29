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
char check = '0';
int i;


_putchar(number4);
_putchar(number3);
_putchar(points);
_putchar(number2);
_putchar(number1);
_putchar('\n');
for (i = 0; i<= 1440 ;i++ )
{
if (number3 == '0' && number4 == '0' && check == '1')
{
_putchar(number1);
number2++;
_putchar(number2);
_putchar(points);
_putchar(number3);
_putchar(number4);
_putchar('\n');
}

if(check == 0)
{
for (int j = 0;check == '1' ; j++)
{
if(number3 <= '6' && number4 <= '9')
{
if(number3 != '6')
{
_putchar(points);
_putchar(number3);
}
if (number4 < 58)
{
number4++;
}
_putchar(number4);
_putchar('\n');
}
if(number4 == '9' && number3 < '6')
{
if(number3 < '5')
{
_putchar(points);
number3++;
_putchar(number3);
number4 = '0';
_putchar(number4);
_putchar('\n');
}else
{
_putchar(points);
number3 = '0';
_putchar(number3);
number4 = '0';
_putchar(number4);
_putchar('\n');
check = '1';
}

}

}
}
}
}
