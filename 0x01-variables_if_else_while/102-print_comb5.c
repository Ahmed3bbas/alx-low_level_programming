#include<stdio.h>

#define DIGITSHIFT 48

void print(int i, int j, int c, int f);
/**
  * main - print comination of 4 digits.
  * void
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
			f = 0;
			while (c <= 9)
			{
				if (i * 10 + j >= c * 10 + f)
				{
					f = j + 1;
				}
				else
				{
					f = 0;
				}
				while (f <= 9)
				{
					print(i, j, c, f);
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

/**
  * print - print four digit in spceific format
  * @i: intger number
  * @j: intger number
  * @c: intger number
  * @f: intger number
  *
  * Description: print four digit in spcific fotmats
  * without any returns
  * Return: void
 */
void print(int i, int j, int c, int f)
{
	putchar(i + DIGITSHIFT);
	putchar(j + DIGITSHIFT);
	putchar(' ');
	putchar(c + DIGITSHIFT);
	putchar(f + DIGITSHIFT);
}
