#include <stdio.h>

/**
* main - check the code
*@argc:arguments count
*@argv:the argument array of command string
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
if (argc < 3)
printf("Error\n");
return (1);
int i = 0;
int result = 1;
while (i != argc)
{
result = result + argv[i];
i++;
}
printf("%d\n", result);
return (0);
}
