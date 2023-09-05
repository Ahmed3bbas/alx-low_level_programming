#include <string.h>
#include <stdlib.h>

/**
  * create_array - create dynamic array allocation by malloc
  * @s: string
  * Return: pinter to this array or NULL if failed
  */
char *create_array(char *s)
{
	char *newstr;
	int l, i;

	l = strlen(s);
	newstr = malloc(l + 1);

	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		newstr[i] = s[i];
	}
	return (newstr);
}
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

	if (s1 == NULL && s2 == NULL)
		return ("");
	else if (s1 == NULL)
	{
		return (create_array(s2));
	}
	else if (s2 == NULL)
	{
		return (create_array(s1));
	}

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
