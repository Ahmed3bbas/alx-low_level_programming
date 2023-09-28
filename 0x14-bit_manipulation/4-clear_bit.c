/**
 * clear_bit - clear bit on an index
 * @n: number
 * @index: position
 * Return: 1 for success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l = sizeof(unsigned int) * 8;

	if (index >= l)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	return (1);
}
