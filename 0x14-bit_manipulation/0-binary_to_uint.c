#include<string.h>

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
 * binary_to_uint - convert binary to decimel
 * @b: string
 * Return: decimel number or 0 if input is NULL or contains char not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	int i, l, p = 0, res = 0;

	if (b == NULL)
		return (0);
	l = strlen(b);
	i = l - 1;
	while (i >= 0)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);

		res += ((b[i] - '0') * power(2, p));
		i--;
		p++;
	}
	return (res);
}
