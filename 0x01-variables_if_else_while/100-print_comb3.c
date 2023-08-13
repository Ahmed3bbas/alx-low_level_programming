#include<stdio.h>

#define DIGITSHIFT 48

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
	return (1);
}
