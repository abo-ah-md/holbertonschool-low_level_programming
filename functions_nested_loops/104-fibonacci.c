#include "main.h"
#include <stdio.h>
/**
*main - main function
*Return: always return 0
*/

int main(void)
{
int i = 1;
long fib0 = 1;
long fib1 = 2;
long newfib = 0;
printf("%ld, %ld, ", fib0, fib1);
while (i <= 96)
{
newfib = fib0 + fib1;
if (i == 96)
printf("%ld", newfib);
else
printf("%ld, ", newfib);
fib0 = fib1;
fib1 = newfib;
i++;
}
printf("\n");
return (0);
}
