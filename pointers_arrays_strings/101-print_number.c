#include "main.h"
#include <stdio.h>
/**
*print_number - copies n elements of an arr to another
*@n: number
*/
void print_number(int n)
{
int i;
int j;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *alpha_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i]; i++)
{
for (j = 0; alpha[j]; j++)
{
if (str[i] == alpha[j])
{
str[i] = alpha_rot[j];
break;
}
}
}
return (str);
}
