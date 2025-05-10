#include "main.h"
#include <stdio.h>
/**
*_strncpy - concat arr string to another
*@dest: pointer to string destenation
*@src: pointer to a string
*@n: number of bytes
*Return:pointer  of the dest arr
*/

char *_strncpy(char *dest, char *src, int n)
{
int k  = 0;

while (src[k])
{
dest[k] = src[k];
k++;
}
dest[k] = '\0';
return (dest);
}
