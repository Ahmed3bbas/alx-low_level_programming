
/**
  * print_alphabet - print alpjabet in lower case
  * void
  *
  * Return: void
 */

void print_alphabet(void)
{
	char c = 'a' ;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
