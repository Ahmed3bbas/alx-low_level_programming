/**
 * get_bit - get bit og an index
 * @n: number
 * @index: position
 * Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int l = sizeof(unsigned int) * 8;

	if (index >= l)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
