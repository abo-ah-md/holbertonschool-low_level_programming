#include "main.h"

/**
*_isLower - check and prints if the alphabet in lowercase
*Return: 0
*/
int _islower(int c)
{

char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i;
for(i = 0;i != '\0';i++)
{

if(c == alphabet[i])
return 1;
}
return 0;
}
