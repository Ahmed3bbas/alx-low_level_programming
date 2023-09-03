/**
  *_pow_recursion - power of number
  * @x: number
  * @y: power
  * Return: the ppwer of number
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
