#include "main.h"
#include <stdio.h>
/**
*_strcmp - compare arr string to another
*@s1: pointer to string destenation
*@s2: pointer to a string
*Return: the first char deference in ascii value between the strings
*/

int _strcmp(char *s1, char *s2)
{
int i  = 0;

while (s1[i] && s2[i])
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);

i++;
}
return (0);
}
