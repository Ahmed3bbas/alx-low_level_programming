#include "main.h"

void increment_to_98(int n);
void decrement_to_98(int n);

/**
  * print_to_98 - print numbers form n to 98
  * @n: start point
  *
  * Return: void
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		increment_to_98(n);
	}
	else
	{
		decrement_to_98(n);
	}
	_putchar('\n');
}

/**
 * increment_to_98 - print from lower to 98
 * @n: intger number
 *
 * Return: void
 */
void increment_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
	if (i < 10 && i >= 0)
	{
		_putchar(i + '0');
	}
	else if (i < 0)
	{
		_putchar('-');
		if (i <= -10)
		{
			_putchar(-1 * i / 10 + '0');
			_putchar(-1 * i % 10 + '0');
		}
		else
		{
			_putchar(-1 * i + '0');
		}
	}
	else
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	i++;
	}
}

/**
  * decrement_to_98 - print from higher to lower 98
  * @n: intger number
  *
  * Return: void
 */
void decrement_to_98(int n)
{
	int i = n;

	while (i >= 98)
	{
	if (i < 100)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	else
	{
		_putchar(i / 100 + '0');
		_putchar((i / 10) % 10 + '0');
		_putchar(i % 10 + '0');
	}

	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	i--;
	}
}

