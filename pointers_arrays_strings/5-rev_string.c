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
int k;
for (i = 0 ; s[i] != '\0'; i++)
{}
char temp[i];
for (j = 0; j < i; j++)
{
temp[j] = s[i - 1 - j];
}
for (k = 0; k < i; k++)
{
s[k] = temp [k];
}
}
