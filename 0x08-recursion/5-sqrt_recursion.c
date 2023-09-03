/**
  * _sqrt - get squre root of number
  * @res: the number needs root of it
  * @div: the rott of this number
  * Return: int
  */
int _sqrt(int res, int div)
{
	if (div <= 0)
		return (-1);
	if (div * div == res)
		return (div);
	return (_sqrt(res, --div));
}

/**
  * _sqrt_recursion - get squre root of number by recursion method
  * @n: int
  * Return: int
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n / 2));
}
