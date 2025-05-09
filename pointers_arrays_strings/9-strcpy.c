#include "main.h"
#include <stdio.h>
/**
*_strcpy- copies n elements of an arr to another
*@src: pointer_number
*@dest:number
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; i != '\0';i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return dest;
}
