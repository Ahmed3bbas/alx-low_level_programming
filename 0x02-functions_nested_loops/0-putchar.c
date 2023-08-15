#include "main.h"

/**
  * main - print string without printf
  * void
  * 
  * Return: 0 for success state
 */

int main(void)
{
	char* str = "_putchar";
	int i = 0;
	char c = str[i];

	while (c != '\0')
	{
		_putchar(c);
		i++;
		c = str[i];
	}

	_putchar('\n');
	return(0);
}
