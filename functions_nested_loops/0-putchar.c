#include <unistd.h>
/* more headers goes there */

/**
* main - print string using only _putchat
* Return: 0
*/

char _putchar(char c)
{
return (write(1,&c, 1));
}
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);

}
