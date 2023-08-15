#include "main.h"

/**
  * main - print string without printf
  * void
  *
  * Return: 0 for success state
 */

int main(void)
{
	char c = 'a' ;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}
