#include "main.h"
/**
 * print_binary - convert decimel to binary
 * @n: int
 * Returns: void
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n)
	{
		_putchar((n % 2) + '0');
		n /= 2;
	}
}
