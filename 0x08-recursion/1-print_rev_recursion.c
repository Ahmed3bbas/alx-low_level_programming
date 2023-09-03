#include "main.h"
/**
  * _printchar - print char
  * @s: sting
  * @i: index of char
  * Return: void
  */

void _printchar(char *s, int i)
{
	if (s[i] == '\0')
	{
		return;
	}
	_printchar(s, ++i);
	_putchar(s[i]);
}

/**
  * _print_rev_recursion - print string reversely
  * @s: string
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	_printchar(s, 0);
}
