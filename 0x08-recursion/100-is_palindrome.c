#include "main.h"
#include <string.h>

/**
  * palindrome - check if palindrome
  * @s: string
  * @b: begining of string
  * @e: end of the string
  *
  * Return: int
  */
int palindrome(char *s, int b, int e)
{
	if (b >= e)
		return (1);
	if (s[b] == s[e])
		return (palindrome(s, b + 1, e - 1));
	else
		return (0);
}

/**
  * is_palindrome - check if string is palindrome
  * @s: string
  *
  * Return: int
  */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, strlen(s) - 1));
}
