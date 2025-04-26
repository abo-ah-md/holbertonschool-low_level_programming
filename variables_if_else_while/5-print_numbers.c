#include <stdio.h>
/* more headers goes there */

/**
* main - generate random number and
* prints the numbers from 0 to 10
* in lowercase, followed by a new line
* Return: 0
*/
int main(void)
{
int n;
for (n = 1; n <= 10; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
