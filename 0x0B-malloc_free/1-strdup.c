#include <stdlib.h>
#include <string.h>

/**
  * _strdup - copy string in new array
  * @str: input string
  * Return: pointer for new array or NULL for failure
  */
char *_strdup(char *str)
{
	char *arr;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(str));

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, l = strlen(str);

		for (i = 0; i <= l; i++)
		{
			arr[i] = str[i];
		}
		return (arr);
	}
}
