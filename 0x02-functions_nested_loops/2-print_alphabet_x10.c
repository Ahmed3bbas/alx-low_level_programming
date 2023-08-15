#include "main.h"
/**
  * print_alphabet_x10 - print alphabets in lower case 10x
  * void
  *
  * Description: print alphabets 10x in lower case
  * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
