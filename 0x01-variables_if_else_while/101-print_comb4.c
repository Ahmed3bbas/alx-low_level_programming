#include<stdio.h>

#define DIGITSHIFT 48

/**
  * main - print comination of 3 digits.
  * viod
  *
  * Description: print comination of 3 digits with loops.
  * Return: 0 for sucess state
  */
int main(void)
{
	int i = 0, j, c;

	while (i < 10)
	{
		j = i + 1;

		while (j <= 9)
		{
			c = j + 1;
			while (c <= 9)
			{
				putchar(i + DIGITSHIFT);
				putchar(j + DIGITSHIFT);
				putchar(c + DIGITSHIFT);

				if (i == 7 && j == 8 && c == 9)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				c += 1;
			}

			j += 1;
		}

		i += 1;
	}
	putchar('\n');
	return (0);
}
