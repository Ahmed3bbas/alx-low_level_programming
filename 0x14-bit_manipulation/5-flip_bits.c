/**
 * power - power of a number
 * @n: number
 * @p: power
 *
 * Return: int
*/

int power(int n, int p)
{
	int s = 1, i = 0;

	while (i < p)
	{
		s *= n;
		i++;
	}
	return (s);
}

/**
 * get_number_of_digits - get number of digits for binary
 * @n: number
 * Return: int
*/

int get_number_of_digits(int n)
{
	int i = 0, p = 2;

	while (n > (p - 1))
	{
		i++;
		p = power(2, i);
	}
	return (i);
}

/**
 * flip_bits - get number of digits to flip number to another
 * @n: number
 * @m:another number
 * Return: number of digits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int dn, dm, s = 0, i = 0, max = get_number_of_digits(n);

	if (get_number_of_digits(m) > max)
	{
		max = get_number_of_digits(m);
	}

	while (i <= max)
	{
		dn = ((n >> i) & 1);
		dm = ((m >> i) & 1);

		if (dn != dm)
		{
			s++;
		}
		i++;
	}
	return (s);
}
