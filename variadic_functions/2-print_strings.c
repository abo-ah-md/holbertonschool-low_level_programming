#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings-prints all the passed arguments
*@n:count of arguments
*@separator: number separator
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
if (separator == NULL)
separator = "";
va_start(args,n);
if (n == 0)
{
printf("\n");
return;
}
for (i = 0; i < (n - 1); i++)
{
char *str = va_arg(args, char*);
if(str != NULL)
printf("%s%s",str, separator);
if(str == NULL)
printf("nil%s", separator);
}
char *last = va_arg(args, char*);
if(last != NULL)
printf("%s\n",last);
if(last == NULL)
printf("nil/n");
va_end(args);
}
