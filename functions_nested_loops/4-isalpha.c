#include "main.h"

/**
*_isalpha - check and prints if the alphabet in lowercase
*@c:the char to check
*Return: 0 or 1
*/
int _isalpha(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
if (c >= 'A' && c >= 'Z')
{
return (1);
}
return (0);

}
