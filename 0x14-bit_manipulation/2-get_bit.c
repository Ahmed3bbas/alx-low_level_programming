/**
 * get_bit - get bit og an index
 * @n: number
 * @index: position
 * Return: bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
