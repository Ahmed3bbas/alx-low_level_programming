#include <stdio.h>
unsigned long int fibonacci(int);

/**
 * main - print first 50 numbers of fabonacci
 *
 * Return: 0 for scucess state
 */

int main(void)
{
	unsigned long int i = 1, res, sum = 0;
	unsigned long int MAX = 50;

	while (i <= MAX)
	{
		res = fibonacci(i);

		if (res < 4000000)
		{
			if (res % 2 == 0)
			{
				sum += res;
			}
		}
		else
		{
			break;
		}
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}

/**
 * fibonacci - calculate faboncci series
 * @n: intger number
 *
 * Return: the calualted results
 */
unsigned long int fibonacci(int n)
{
	unsigned long int res = n;

	if (n > 2)
	{
		res = fibonacci(n - 1) + fibonacci(n - 2);
	}

	return (res);
}
