#include "main.h"
#include <stdio.h>
/**
*_strcat - concat arr string to another
*@dest: pointer to string destenation
*@src: pointer to a string
*Return:pointer  of the dest arr
*/

char *_strcat(char *dest, char *src)
{
int i  = 0;
int j  = 0;
int k  = 0;
while (src[i])
{
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
if (i == k)
dest[j] = '\0';
}

return (dest);
}
