#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all-prints all the passed arguments
*@format:type of arguments
*/
void print_all(const char *const format, ...)
{

int i = 0;
char *sep = "";
char *str;
va_list args;
va_start(args, format);
if (format == NULL)
{
printf("\n");
return;
}
while (format[i])
{
switch (format[i]) {
case 'c':
printf("%s%c", sep, va_arg(args, int));
sep = ", ";
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
sep = ", ";
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
sep = ", ";
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("%s(nil)", sep);
sep = ", ";
break;
}
printf("%s%s", sep, str);
sep = ", ";
break;
}

i++;
}
printf("\n");
}
