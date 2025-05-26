#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main- do tow int calculation
*Return: 0
*@argv: the user input
*@argc:user input count
**/
int main(int argc, char **argv)
{
int num1;
int num2;
int (*op_func)(int, int) = get_op_func(argv[2]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (op_func == NULL)
{
printf("Error\n");
exit(99);
}
if ((argv[2][0] == '%' || argv[2][0] == '/') && num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", op_func(num1, num2));
return (0);
}
