#include "main.h"

/**
  * print_sign - check sign of number
  * @n: intger number
  * 
  * Return 1 if number is greater than zero
  * 0 if number is 0
  * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
