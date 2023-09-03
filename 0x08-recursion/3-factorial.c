#include "main.h"

/**
 * factorial - calculate fibonacci
 * @n: longger number
 *
 * Return: the calualted results
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
