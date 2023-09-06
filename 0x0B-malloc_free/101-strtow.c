#include <stdlib.h>
#include <string.h>
/**
 * _getnumberofwords - get Number of words
 * @str: string
 * Return: Number of words
*/
int _getnumberofwords(char *str)
{
	int NW = 0, i, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ') || (str[i] != ' ' && i == 0))
		{
			NW++;
		}
	}
	return (NW);
}

/**
 * _sizeofwords - return array with size of each word
 * @str: string
 * Return: array of sizes
*/
int *_sizeofwords(char *str)
{
	int IW = 0, i, l = strlen(str), wordstart, wordend, NW;
	int *arr;

	NW = _getnumberofwords(str);
	arr = malloc(sizeof(int) * NW);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ' && i == 0)
		{
			wordstart = i;
		}
		else if (str[i] != ' ' && str[i - 1] == ' ')
		{
			wordstart = i;
		}
		else if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wordend = i;
			arr[IW] = (wordend - wordstart + 1);
			IW++;
		}
	}
	return (arr);
}

/**
 * arrayofwords - convert string to array of words
 * @wordsgrid: array of words
 * @str: string
 * Return: void
*/
void arrayofwords(char **wordsgrid, char *str)
{
	int i, row = 0, col = 0, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ' && i == 0)
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
		else if (str[i] != ' ' && str[i - 1] == ' ')
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
		else if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wordsgrid[row][col] = str[i];
			col++;
			wordsgrid[row][col] = '\0';
			row++;
		}
		else
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
	}
}

/**
 * strtow - main function process all previous functions
 * @str: string
 * Return: array of string
*/
char **strtow(char *str)
{
	int i, l, NW, stopflag = 0;
	char **wordsgrid;
	int *arr;

	if (str == NULL)
		return (NULL);

	l = strlen(str);

	if (l == 0)
		return (NULL);

	NW = _getnumberofwords(str);
	wordsgrid = (char **)malloc(sizeof(char *) * (NW + 1));

	if (wordsgrid == NULL)
		return (NULL);
	arr = _sizeofwords(str);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < NW; i++)
	{
		wordsgrid[i] = (char *)malloc(sizeof(char) * arr[i]);
		if (wordsgrid[i] == NULL)
		{
			stopflag = i;
		}
	}
	if (!stopflag)
	{
		for (i = 0; i < stopflag - 1; i++)
		{
			free(wordsgrid[i]);
		}
		free(wordsgrid);
		return (NULL);
	}
	arrayofwords(wordsgrid, str);
	return (wordsgrid);
}
