#include "main.h"
/**
  * _strlen- print char
  * @s: sting
  * @i: index of char
  * Return: number of char
  */
int _strlen(char *s, int i)
{

	if (s[i] == '\0')
	{
		return (0);
	}
	return (_strlen(s, ++i) + 1);
}


/**
  * _strlen_recursion - length of string
  * @s: string
  * Return: int
  */
int _strlen_recursion(char *s)
{
	return (_strlen(s, 0));
}
