#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatinate two strings in one string
 * @s1: First string
 * @s2: second string
 * Return: newstring address or NULL if Fail to allocate memory
*/
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, l1, l2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	l1 = strlen(s1);
	l2 = strlen(s2);
	newstr = malloc(l1 + l2 + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		newstr[i] = s1[i];
	}

	for (i = 0; i <= l2; i++)
	{
		newstr[i + l1] = s2[i];
	}

	return (newstr);
}
