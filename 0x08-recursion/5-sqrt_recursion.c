/**
  * _sqrt - get squre root of number
  * @res: the number needs root of it
  * @div: the rott of this number
  * Return: int
  */
int _sqrt(int res, int div)
{
	if (res == 1)
		return (1);
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
	if (n < 4096)
		return (_sqrt(n, n / 2));
	else if (n < 10000)
		return (_sqrt(n, n / 100));
	else if (n < 1000000)
		return (_sqrt(n, n / 1000));
	else
		return (_sqrt(n, n / 2000));
}
