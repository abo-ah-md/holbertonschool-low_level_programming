#include "main.h"
#include <stdio.h>
/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
int i = 2;
long number = 612852475143;
while (i * i < number)
{
if (number % i == 0)
{
number /= i;
}
else
{
i++;
}
}
printf("%lu\n", number);
return (0);
}
