#include "main.h"
/**
  * print_last_digit - print last digit of number
  * @n: inger number
  *
  * Return: The last digit of the input number
 */
int print_last_digit(int n)
{
	int num = n >= 0 ? n : -1 * n;

	_putchar((num % 10) + '0');
	return (num % 10);
}
