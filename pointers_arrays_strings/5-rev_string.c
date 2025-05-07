#include "main.h"
#include <stdio.h>
/**
*rev_string - revrese  a string
*@s: string
*
*/
void rev_string(char *s)
{
int i;
int j;
char tmp;
for (i = 0 ; s[i] != '\0'; i++)
{}
i--;

for (j = 0; j <  i; j++)
{
tmp  = s[j];
s[j] = s[i];
s[i] = tmp;
i--;
}
}
