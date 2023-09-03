/**
  * _prime - prime number y recursion
  * @res: the number
  * @div: used to check if the res is prime
  * Return: int
  */
int _prime(int res, int div)
{
	if (res <= 1)
		return (0);
	if (res % div == 0 && div != 1)
		return (0);
	if (div == 1)
		return (1);
	return (_prime(res, --div));
}

/**
  * is_prime_number - check if the number is prime by recurion
  * @n: number
  * Return: 1 if prime, 0 if not
  */
int is_prime_number(int n)
{
	return (_prime(n, n - 1));
}
