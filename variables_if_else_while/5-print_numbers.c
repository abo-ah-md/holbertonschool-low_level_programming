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
char n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
if (n != 58)
{
putchar(49);
putchar(48);
}

putchar('\n');

return (0);
}
