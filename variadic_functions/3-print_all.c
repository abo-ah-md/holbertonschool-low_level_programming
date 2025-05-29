#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all-prints all the passed arguments
*@format:type of arguments
*/
void print_all(const char *const format, ...)
{
va_list args;
va_start(args, format);
int i = 0;
char *sep = "";
char *str;
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *)
if (str == NULL)
printf("%s(nil)", sep);
printf("%s%s", sep, str);
break;
}
sep = ", ";
i++;
}
}
