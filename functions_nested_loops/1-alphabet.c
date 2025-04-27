#include "main.h"

/**
*print_alphabet - prints the alphabet in lowercase
*/
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i= 0;
while(alphabet[i] != '\0')
{
_putchar(alphabet[i]);
i++;
}
}
