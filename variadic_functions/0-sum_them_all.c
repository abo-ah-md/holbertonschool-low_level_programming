#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*sum_them_all- sums all the arguments
*@n:count of arguments
* Return: sum of all the numbers
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int sum = 0;
unsigned int i;
if (n == 0)
return (0);
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
return (sum);
}
