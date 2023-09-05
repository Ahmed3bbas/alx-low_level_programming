#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concat all stringes that passes in arguments
 * @ac: Number of args
 * @av: array of strings
 * Return: new concatinated string
*/
char *argstostr(int ac, char **av)
{
	int i, j, l = 0, prel = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		l += (strlen(av[i]) + 1);
	}
	newstr = malloc(sizeof(char) * (l + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l = strlen(av[i]);
		for (j = 0; j <= l; j++)
		{
			if (av[i][j] == '\0')
			{
				newstr[j + prel] = '\n';
			}
			else
			{
				newstr[j + prel] = av[i][j];
			}
		}
		prel += (j);
	}
	newstr[prel] = '\0';
	return (newstr);
}
