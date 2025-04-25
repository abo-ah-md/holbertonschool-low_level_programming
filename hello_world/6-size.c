#include <stdio.h>
/**
* main - prints the size of datatypes in the system to standerd output
* Return: 0
*/
int main(void)
{
  printf("Size of a char:",sizeof(char), "byte(s)");
 printf("Size of a int:",sizeof(int)"byte(s)");
 printf("Size of a long int:", sizeof(long)"byte(s)");
printf("Size of a long long int:"sizeof(long * 2)"byte(s)");
printf("Size of a float:"sizeof(float)"byte(s)");
return (0);
}
