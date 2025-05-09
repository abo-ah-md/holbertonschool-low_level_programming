#include "main.h"
#include <stdio.h>
/**
*_atoi - copies n elements of an arr to another
*@s: pointer to string
*
*Return:copies of the str
*/
int _atoi(char *s)
{
int result = 0;
int neg = 1;
int i;

for (i = 0; s[i]; i++)
{
if (s[i] <= '9' && s[i] >= '0')
{
result = result * 10 + (s[i] - '0');
if (s[i + 1] > '9' || s[i + 1] < '0')
{
return (result * neg);
}
}
if (s[i] == '-')
{
if (s[i + 1] <= '9' && s[i + 1] >= '0')
{
neg = -1;
}
else
if (s[i + 1] == '+')
{
neg = -1;
}
}
}
return (result *neg);
}
