#include<stdio.h>

#define DIGITSHIFT 48

/**
  * main - print comination of 4 digits.
  * viod
  *
  * Description: print comination of 4 digits with loops.
  * Return: 0 for sucess state
  */
int main(void)
{
	int i = 0, j = 0, c = 0, f = 0;

	while (i < 10)
	{
		j = 0;

		while (j <= 9)
		{
			c = i;

			while (c <= 9)
			{
				if(c == 0)
				{
					f = j + 1;
				}
				else
				{
					f = 0;
				}

				while (f <= 9)
				{
					putchar(i + DIGITSHIFT);
					putchar(j + DIGITSHIFT);
					putchar(' ');
					putchar(c + DIGITSHIFT);
					putchar(f + DIGITSHIFT);

					if (i == 9 && j == 8 && c == 9 && f == 9)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					f += 1;
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
