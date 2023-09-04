#include <stdlib.h>

/**
  * create_array - create dynamic array allocation by malloc
  * @size: size of array
  * @c: italize with char
  * Return: pinter to this array ot NULL if failed
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
