#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
if(i == 100)
{
printf("FizzBuzz");
continue;
}
else
{
printf("FizzBuzz ");
continue;
}
}
if (i % 3 == 0)
{
printf("Fizz ");
}
if (i % 5 == 0)
{
printf("Buzz ");
}
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
