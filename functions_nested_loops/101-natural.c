#include "main.h"
#include <stdio.h>
/**
*main - main function
*Return: always return 0
*/

int main(void)
{
int i = 0;
int sum = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
i++;
}
printf("%d\n", sum);
return (0);
}
