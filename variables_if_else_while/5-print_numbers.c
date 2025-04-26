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
for (n = '0'; n <= '10'; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
