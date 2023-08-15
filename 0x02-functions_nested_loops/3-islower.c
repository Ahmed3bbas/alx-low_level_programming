/**
  * _islower - check if char is lower case
  * @c: character
  *
  * Return: 1 if character is lower
  * 0 else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
