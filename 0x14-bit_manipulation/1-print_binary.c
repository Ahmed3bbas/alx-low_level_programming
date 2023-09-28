#include "main.h"
/**
 * power - power of a number
 * @n: number
 * @p: power
 *
 * Return: int
*/

int power(int n, int p)
{
	int s = 1, i = 0;

	while (i < p)
	{
		s *= n;
		i++;
	}
	return (s);
}

/**
 * get_number_of_digits - get number of digits for binary
 * @n: number
 * Return: int
*/

int get_number_of_digits(int n)
{
	int i = 0, p = 2;

	while (n > (p - 1))
	{
		i++;
		p = power(2, i);
	}
	return (i);
}


/**
 * print_binary - convert decimel to binary
 * @n: int
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int i, p = get_number_of_digits(n);

	i = p - 1;
	if (n <= 1)
		_putchar(n + '0');
	while (i >= 0)
	{
		_putchar(((n >> i) & 1) + '0');
		i--;
	}
}
