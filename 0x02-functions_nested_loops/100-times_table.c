#include "main.h"

void print_numbers(int res, int r);
/**
  * print_times_table - print n times table
  * @n: n times table
  *
  * Return: void
 */

void print_times_table(int n)
{
	int c = 0, r = 0, res;

	if (n <= 15 && n >= 0)
	{
	while (c < n + 1)
	{
		r = 0;
		while (r < n + 1)
		{
			res = r * c;

			print_numbers(res, r);

			if (r != n)
			{
				_putchar(',');
			}
			r++;
		}
		_putchar('\n');
		c++;
	}
	}
}

/**
 * print_numbers - just print number till 3 digits
 * @res: the printed number
 * @r: this parameter used to check if this is first element or not
 *
 * Return: void
 */
void print_numbers(int res, int r)
{

			if (res < 10)
			{
				if (r != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else if (res >= 10 && res < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res / 100 + '0');
				_putchar((res / 10) % 10 + '0');
				_putchar(res % 10 + '0');
			}
}
