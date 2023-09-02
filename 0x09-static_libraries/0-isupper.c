/**
  * _isupper - check if char is lower case
  * @c: character
  *
  * Return: 1 if character is lower
  * 0 else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
