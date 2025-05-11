#include "main.h"
#include <stdio.h>
/**
**leet - encodes a string into 1337
*@str: array of chars
*Return: uppercased strings
*/

char *leet(char *str)
{
char replacablealpha[] = "AaeEoOtTLl";
char replacedby[] = "4433007711";
int i = 0;
while (str[i])
{
int j = 0;
while (replacablealpha[j])
{
if (replacablealpha[j] == str[i])
{
str[i] = replacedby[j];
}
j++;
}
i++;
}
return (str);
}
