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
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_printchar(s, ++i);
}


/**
  * _puts_recursion - print string
  * @s: string
  * Return: void
  */
void _puts_recursion(char *s)
{
	_printchar(s, 0);
}
