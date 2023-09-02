/**
  * _isdigit - check if char is digit
  * @c: character
  *
  * Return: 1 if character is digit
  * 0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
