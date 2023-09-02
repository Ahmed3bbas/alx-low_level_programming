#include <string.h>
#include <stdio.h>
/**
 * power - power of a number
 * @n: number
 * @p: power
 *
 * Return: int
*/
int power(int n , int p)
{
        int s=1, i = 0;
        while (i < p)
        {
                s *= n;
                i++;
        }
        return (s);
}

/**
  * cvtdig - convert to digit
  * @s - string
  * Return: intger number
  */

int cvtdig(char *s)
{

	int i ,n = 0 , l = strlen(s);
	i = l - 1;
	while (i >= 0)
	{
		n += ((s[l - (i + 1)] - '0') * power(10 , i));
		i--;
	}
	return (n);
}

/**
  * _is_digit - check if input is digit
  * @s: string
  * return: 1 if input is digit
  */

int _is_digit(char *s)
{
	int i = 0;
	char c;

	while (s[i] != '\0')
	{
		c = s[i];
		if(c < '0' || c > '9')
		{
			return (0);
		}
		i++;
		
	}
	return (1);
}

/**
 *main - check the code
 *@argc: Counter of Arguments
 *@argv: Argument Array
 *Return: 0 Success, 1 Error.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1, flag = 0;
char ErrorMsg[] = "Error";
if (argc == 1)
{
	printf("%d\n",sum);
}
else
{
	while (i < argc)
	{
		if (_is_digit(argv[i]))
		{
			sum += cvtdig(argv[i]);
		}
		else
		{
			printf("%s\n", ErrorMsg);
			flag = 1;
			break;
		}
		i++;
	}
	if (!flag)
	{
		printf("%d\n", sum);
	}
}

return (0);
}

