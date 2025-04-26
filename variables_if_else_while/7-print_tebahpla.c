#include <stdio.h>
/* more headers goes there */

/**
* main - generate random number and
* prints the alphabet in lowercase, followed by a new line
* Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');

return (0);
}
