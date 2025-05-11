#include "main.h"
#include <stdio.h>
/**
*string_toupper - changes all lowercase letters of a string to uppercase
*@str: array of chars
*Return: uppercased string
*/

char *string_toupper(char *str)
{
char alphabetUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alphabetLower[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (str[i])
{
int j = 0;
while (alphabetLower[j])
{
if (str[i] == alphabetLower[j])
{
str[i] = alphabetUpper[j];
}
j++;
}
i++;
}
return (str);
}
