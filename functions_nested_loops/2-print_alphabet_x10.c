#include "main.h"

/**
*print_alphabet_x10 - prints the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

int i = 0;

int ten;

for (ten = 0; ten < 10; ten++)
{
i = 0;
while (alphabet[i] != '\0')
{
_putchar(alphabet[i]);
i++;
}
}
}
