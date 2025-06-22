#include <stdio.h>
#include <string.h>

/**
*binary_to_unit - converts binary to unsigned int
*@b:binary in string format
*Return:The converted number or 0  
**/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int result;
result = 0;  
i = 0;
while (b[i] != '\0') {  
if(b[i] != '0' && b[i] != '1')
return (0);
result = (result << 1) + b[i] - '0';  
i++;
}
return result;
}
