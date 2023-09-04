
/**
  * wild - compare two strings
  * @s1: string
  * @s2: string
  * @i: intger to iterate over s1
  * @j: intger to iterate over s2
  * Return: 1 if two strings are identical
  */
int wild(char *s1, char *s2, int i, int j)
{
	if ((s1[i] ==  '\0' && s2[j] == '\0'))
	{
		return (1);
	}
	else if ((s2[j] == '*' && s2[j + 1] == '\0') && s1[i] == '\0')
	{
		return (1);
	}
	else if (s2[j] == '*')
	{
		if (wild(s1, s2, i, j + 1) || (s1[i] != '\0' && wild(s1, s2, i + 1, j)))
		{
			return (1);
		}
	}
	else if (s1[i] == s2[j])
	{
		return (wild(s1, s2, i + 1, j + 1));
	}
	return (0);
}

/**
  * wildcmp - compare two strings include * wildcard
  * @s1: string
  * @s2: string
  * Return: 1 if two strings are identical else returns 0
  */
int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2, 0, 0));
}
