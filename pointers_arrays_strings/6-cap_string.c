#include "main.h"
#include <stdio.h>
/**
**cap_string - changes all lowercase letters of a string to uppercase
*@str: array of chars
*Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ),{,}
* space, tabulation, new line,
*Return: uppercased strings
*/

char *cap_string(char *str)
{
char alphabetUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alphabetLower[] = "abcdefghijklmnopqrstuvwxyz";
char seprators[] = " \n,;.!?\"(){}\t";
int i = 0;
while (str[i])
{
int j = 0;
while (alphabetLower[j])
{
if (str[i] == alphabetLower[j])
{
int k = 0;
while (seprators[k])
{
if (str[i - 1] == seprators[k] || i  == 0)
{
str[i] = alphabetUpper[j];
}
k++;
}
}
j++;
}
i++;
}
return (str);
}
