#include "main.h"
#include <stdio.h>
/**
*_strncat - concat arr string to another
*@dest: pointer to string destenation
*@src: pointer to a string
*@n: number of bytes
*Return:pointer  of the dest arr
*/

char *_strncat(char *dest, char *src, int n)
{
int i  = 0;
int j  = 0;
int k  = 0;
while (src[i])
{
if (i == n)
{
break;
}
i++;
}
while (dest[j])
{
j++;
}

while (i != k)
{
dest[j] = src[k];
j++;
k++;
}
dest[j] = '\0';
return (dest);
}
