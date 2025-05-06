#include "main.h"
#include <stdio.h>
/**
 * strlen - return the length pf a string
 *@s: astring
 *Return:length of a string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
