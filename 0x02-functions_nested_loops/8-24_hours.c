#include "main.h"

void print_time(int h1, int h2, int m1, int m2);
/**
  * jack_bauer - print time minute by minute
  *
  * Return: void
 */

void jack_bauer(void)
{
	int h = 0, m;

	while (h < 24)
	{
		m = 0;

		while (m < 60)
		{
			if (h < 10 && m < 10)
			{
				print_time(0, h, 0, m);
			}
			else if (h < 10 && m >= 10)
			{
				print_time(0, h, m / 10, m % 10);
			}
			else if (h >= 10 && m >= 10)
			{
				print_time(h / 10, h % 10, m / 10, m % 10);
			}
			else
			{
				print_time(h / 10, h % 10, 0, m);
			}
			_putchar('\n');
			m++;
		}
		h++;
	}
}

/**
  * print_time - just print time in this format h1h2:m1m2
  * @h1: single digit the most decimel
  * @h2: single digit the least decimel
  * @m1: intger single digit the most decimel
  * @m2: intger single digit the least decimel
  *
  * Return: void
 */
void print_time(int h1, int h2, int m1, int m2)
{
	_putchar(h1 + '0');
	_putchar(h2 + '0');
	_putchar(':');
	_putchar(m1 + '0');
	_putchar(m2 + '0');
}
