#include "main.h"
/**
  * print_last_digit - print last digit of number
  * @n: inger number
  *
  * Return: The last digit of the input number
 */
int print_last_digit(int n)
{
	int num = n % 10;
	int d = num >= 0 ? num : -1 * num;

	_putchar(d + '0');
	return (d);
}
