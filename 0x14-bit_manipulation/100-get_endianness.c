/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;

	return ((int)*c);
}
