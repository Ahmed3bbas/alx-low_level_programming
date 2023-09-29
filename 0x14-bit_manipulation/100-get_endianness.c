/**
 * get_endianness - get the endiannes of system
 * Return: 0 for big endiannes or 1 for little endiannes
*/
int get_endianness(void)
{
	int i = 1;

	if ((i & 1) == 1)
		return (1);
	else
		return (0);
}
