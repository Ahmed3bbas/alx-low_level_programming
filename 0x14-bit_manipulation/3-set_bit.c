/**
 * set_bit - set bit on an index
 * @n: number
 * @index: position
 * Return: 1 for success
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
