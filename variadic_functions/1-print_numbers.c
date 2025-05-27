#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers-prints all the passed arguments
*@n:count of arguments
*@separator: number separator
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int sum = 0;
unsigned int i;
if (separator == NULL)
separator = "";
va_start(args, n);
for (i = 0; i < (n -1); i++)
printf("%d%s", va_arg(args, int), separator);
printf("%d\n",va_arg(args, int));
va_end(args);
}
