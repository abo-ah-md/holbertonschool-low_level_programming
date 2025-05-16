#include "main.h"
#include <stdio.h>
/**
*main - main function
*Return: always return 0
*/

int main(void)
{
long fib0 = 1;
long fib1 = 2;
long newfib = 0;
long sumof_even_fib = 2;
while (newfib <= 4000000)
{
newfib = fib0 + fib1;
fib0 = fib1;
fib1 = newfib;
if (newfib % 2 == 0)
sumof_even_fib += newfib;
}
printf("%ld\n", sumof_even_fib);
return (0);
}
