#include "main.h"
#include <stdio.h>
/**
**_strspn-  gets the length of a prefix substring.
*@s: pointer to string
*@accept: bytes filter
*Return:number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *a;
int found = 0;
while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
{
i++;
found = 1;
break;
}
a++;
}
s++;
if (!found)
return (i);
}
return (i);
}
