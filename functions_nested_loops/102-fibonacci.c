#include "main.h"
#include <stdio.h>
/**
*main - main function
*Return: always return 0
*/

int main(void)
{
int i = 1;
int fib0 = 1;
int fib1 = 2;
int newfib = 0;
while (i < 50)
{
newfib = fib0 + fib1;
printf("%d\n", newfib);
fib0 = fib1;
fib1 = newfib;
i++;
}

return (0);
}
