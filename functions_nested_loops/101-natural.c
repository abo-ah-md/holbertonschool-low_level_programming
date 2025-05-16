#include "main.h"
#include <stdio.h>
/**
*main - main function
*Return: always return 0
*/

int main(void)
{
int i = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
printf("%d\n", i);

i++;
}
return (0);
}
