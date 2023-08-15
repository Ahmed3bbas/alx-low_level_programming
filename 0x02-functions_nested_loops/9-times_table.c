#include "main.h"

/**
  * times_table - print 9 times table
  *
  * Return: void
 */

void times_table(void)
{
	int c = 0, r = 0, res;

	while (c < 10)
	{
		r = 0;

		while (r < 10)
		{
			res = r * c;
			if (res < 10)
			{
				if (r != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (r != 9)
			{
				_putchar(',');
			}
			r++;
		}
		_putchar('$');
		_putchar('\n');

		c++;
	}
}
