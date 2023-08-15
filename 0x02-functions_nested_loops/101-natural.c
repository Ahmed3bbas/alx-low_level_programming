#include <stdio.h>

/**
 * main - compute the sum of all nums base of 3 or 5
 *
 * Return: 0 for succes state
 */
int main(void)
{
	int n = 1024, sum = 0, i = 1;

	while (i < n)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
