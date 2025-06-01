#include "main.h"
#include <stdio.h>
/**
*print_number - copies n elements of an arr to another
*@n: number
*/
void print_number(int n)
{
  if (n <= 9 && n >= 0)
_putchar((n % 10) + '0');    
   if (n >= 10 && n < 100)
  {
    _putchar((n / 10) + '0');
    _putchar((n % 10) + '0');    
  }
  if (n >= 100 && n < 1000)
  {
    _putchar((n / 100)  + '0');
    _putchar((n / 10) % 10 + '0');
    _putchar((n % 10) + '0');
  }
  if (n >= 1000)
    {
    _putchar((n / 1000) % 10 + '0');    
    _putchar((n / 100) % 10+ '0');
    _putchar((n / 10) % 100 + '0');
    _putchar((n % 10) + '0');
  }

  if (n < 0) {
    if (n >= -10)
{      
    n = -n;
     _putchar('-');    
    _putchar((n % 10) + '0');    
}
    
    if (n <= -10 && n > -100)
{
n = -n;
      _putchar('-');
      _putchar((n / 10) + '0');
      _putchar((n % 10) + '0');
    }
    if (n <= -100) {
n = -n;      
      _putchar('-');
      _putchar((n / 100) + '0');
      _putchar((n / 10)  % 10 + '0');
      _putchar((n % 10) + '0');
    }
  }
}
