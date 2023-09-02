#include "main.h"

/**
  * _puts - print string without printf
  * @s: string
  *
  * Return: 0 for success state
 */

void _puts(char *s)
{
	int i = 0;
	char c = s[i];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = s[i];
	}

	_putchar('\n');
}
