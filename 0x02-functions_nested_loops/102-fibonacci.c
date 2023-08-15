#include <stdio.h>
unsigned long int fibonacci(int);

/**
 * main - print first 50 numbers of fabonacci
 *
 * Return: 0 for scucess state
 */

int main(void)
{
	unsigned long int i = 1, res;
	unsigned long int MAX = 50;

	while (i <= MAX)
	{
		res = fibonacci(i);

		printf("%lu", res);
		if (i != MAX)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
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
