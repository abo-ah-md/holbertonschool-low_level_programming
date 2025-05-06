#include "main.h"
#include <stdio.h>
/**
 * swap_int - change the adress a pointer's value
 *@a: a pointer
 *@b: a pointer
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
