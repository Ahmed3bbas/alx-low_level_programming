#include <stdio.h>
#include <stdlib.h>
/**
  * main - change cents
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: 0 for (success)
 */
int main(int argc, char *argv[])
{
	int n, cents = 0, carr[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			int i = 0;

			while (n != 0)
			{
				cents += (n / carr[i]);
				n = n % carr[i];
				i++;
			}
			printf("%d\n", cents);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
