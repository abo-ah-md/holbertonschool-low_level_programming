#include <stdio.h>
/* more headers goes there */

/**
* main - generate random number and
* prints the numbers from 0 to 10
* in lowercase and form a to f, followed by a new line
* Return: 0
*/
int main(void)
{
char n;

for (n = 48; n <= 57; n++)
{
putchar(n);
putchar(44);
putchar(32);
}
putchar('\n');

return (0);
}
