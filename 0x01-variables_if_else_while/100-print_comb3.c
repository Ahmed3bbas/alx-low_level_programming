#include<stdio.h>

#define DIGITSHIFT 48

/**
  * main - print comination of 2 digits.
  * viod
  *
  * Description: print comination of 2 digits with loops.
  * Return: 0 for sucess state
  */
int main(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = i + 1;

		while (j <= 9)
		{
			putchar(i + DIGITSHIFT);
			putchar(j + DIGITSHIFT);

			if (i == 8 && j == 9)
			{
				j += 1;
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}

			j += 1;
		}

		i += 1;
	}
	putchar('\n');
	return (0);
}
