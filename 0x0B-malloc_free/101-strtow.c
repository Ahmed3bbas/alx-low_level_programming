#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
		if ((str[i] == ' ' && (str[i + 1] != ' '  && str[i + 1] != '\0')))
		{
			/*printf("%c\n", str[i+1]);*/
			NW++;
		} else if (str[i] != ' ' && i == 0)
		{
			/*printf("%c\n", str[i]);*/
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
 * createarraysinarray - create arrays in array which is 2d array
 * @wordsgrid: 2d array
 * @arr: size of each string in array
 * @NW: Number of Words
 * Return: 2d array or null in failure
*/
char **createarraysinarray(char **wordsgrid, int *arr, int NW)
{
	int i, stopflag = 0;

	for (i = 0; i < NW; i++)
	{
		wordsgrid[i] = (char *)malloc(sizeof(char) * (arr[i] + 1));
		if (wordsgrid[i] == NULL)
		{
			printf("Stoped Here: %d\n", i);
			stopflag = i;
		}
	}
	if (stopflag)
	{
		for (i = 0; i < stopflag - 1; i++)
		{
			free(wordsgrid[i]);
		}
		free(wordsgrid);
		return (NULL);
	}
	return (wordsgrid);
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
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wordsgrid[row][col] = str[i];
			col++;
			wordsgrid[row][col] = '\0';
			row++;
			col = 0;
		}
		else if (str[i] != ' ' && i == 0)
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
		else if (str[i] != ' ' && str[i - 1] == ' ')
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
		else if (str[i] != ' ')
		{
			wordsgrid[row][col] = str[i];
			col++;
		}
	}
	wordsgrid[row] = NULL;
}

/**
 * strtow - main function process all previous functions
 * @str: string
 * Return: array of string
*/
char **strtow(char *str)
{
	int l, NW;
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
	if (NW == 0)
	{
		free(wordsgrid);
		return (NULL);
	}
	arr = _sizeofwords(str);

	if (arr == NULL)
		return (NULL);

	wordsgrid = createarraysinarray(wordsgrid, arr, NW);

	if (wordsgrid == NULL)
		return (NULL);
	arrayofwords(wordsgrid, str);
	free(arr);
	return (wordsgrid);
}
