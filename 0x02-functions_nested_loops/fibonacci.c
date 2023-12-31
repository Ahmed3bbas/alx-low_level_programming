#include <stdio.h>
unsigned long int fibonacci(int);

/**
 * main - prlong first 50 numbers of fabonacci
 *
 * Return: 0 for scucess state
 */

int main(void)
{
	unsigned long int i = 1, res;
	unsigned long int MAX = 98;

	while (i <= MAX)
	{
		res = fibonacci(i);

		printf("%llu", res);
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
 * @n: longger number
 *
 * Return: the calualted results
 */
unsigned long int fibonacci(int n)
{
	unsigned long int res = 1;

	if (n > 1)
	{
		res = n * fibonacci(n - 1);
	}
	return (res);
}
