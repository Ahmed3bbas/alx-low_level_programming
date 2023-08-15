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

	while (i <= 50)
	{
		res = fibonacci(i);

		printf("%lu", res);
		if (i != 50)
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
	unsigned long int res = 1;

	if (n > 1)
	{
		res = n * fibonacci(n - 1);
	}
	return (res);
}
