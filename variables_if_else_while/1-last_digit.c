#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - generate random number and tells the value of its last digit
* Return: 0
*/
int main(void)
{
int n;
int last_number;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_number = n % 10;
/* your code goes there */
if (last_number > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last_number);
if (last_number == 0)
printf("Last digit of %d is %d and is 0\n", n, last_number);
if (last_number < 6 && last_number != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n"
, n, last_number);
return (0);
}
