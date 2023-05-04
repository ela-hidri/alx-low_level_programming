/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: to n
 * @m: from m
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int v;

	v = n ^ m;
	while (v > 0)
	{
		i += (v & 1);
		v = v >> 1;
	}
	return (i);
}
