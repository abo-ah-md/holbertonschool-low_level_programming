#include "main.h"

/**
*_islower - check and prints if the alphabet in lowercase
*@c:the char to check
*Return: 0 or 1
*/
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
