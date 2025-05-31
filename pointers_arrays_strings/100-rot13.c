#include "main.h"
#include <stdio.h>
/**
*rot13 - copies n elements of an arr to another
*@str: pointer_number
*Return:string rot13-string
*/
char *rot13(char * str)
{
int i;
int j;
char * alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char * alpha_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i]; i++)
{
for (j = 0; alpha[j]; j++)
{
if(str[i] == alpha[j])
{
str[i] = alpha_rot[j];
break;
}
}
}
return (str);
}
