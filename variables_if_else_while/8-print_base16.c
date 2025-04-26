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
char alpha;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (alpha = 97; alpha <= 102; alpha++)
{
putchar(alpha);
}
putchar('\n');

return (0);
}
