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
int i = 0, result = 0, sign = 1 ;
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
 sign *= -1;
i++;
}

while (s[i] && s[i] >= '0' && s[i] <= '9')
{

if ((result > 214748364 || (result == 214748364 && s[i] - '0' > 8))  && sign == -1)
{
return (-2147483648);
}
else
{
result = result * 10 + (s[i] - '0');
i++;
}
}
return (result *sign);
}
