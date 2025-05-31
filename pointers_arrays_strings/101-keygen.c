#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
srand(time(NULL));
int random;
int sum = 0;
char ascii[2780];
int i = 0;
while (sum < 2772 - 126)
{


if(sum > 2772)
{
while(i > 0)
ascii[i--]= '\0';
sum = 0;
i = 0;
}

random = rand() % 94 + 33;
ascii[i++] = (char)random;
sum += random;
}
ascii[i++] = (char)(2772 - sum);
ascii[i]= '\0';
printf("%s\n", ascii);
return (0);
}
