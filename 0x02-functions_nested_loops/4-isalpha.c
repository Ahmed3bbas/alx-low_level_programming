/**
  * _isalpha - check if char is alpha
  * @c: character
  *
  * Return: 1 if character is alpha
  * 0 else
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
