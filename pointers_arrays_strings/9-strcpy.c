#include "main.h"
#include <stdio.h>
/**
*_strcpy - copies n elements of an arr to another
*@src: pointer_number
*@dest:number
*Return:copies of the str
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
