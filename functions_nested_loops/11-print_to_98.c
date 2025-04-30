 #include "main.h"
#include <stdio.h>
/**
*print_to_98 - return the sum of numbres
*@n:takes a number
*
*/
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
while (n != 98)
{
if (n < 0 || n < 98)
{
printf("%d, ", n);
n++;
}
else
{
printf("%d, ", n);
n--;
}
if (n == 98)
{
printf("%d\n", n);
}
}
}
}
