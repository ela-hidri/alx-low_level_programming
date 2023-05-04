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
	unsigned int v;

	if (n == 0 || m == 0)
		return (0);
	v = n ^ m;
	while (v > 0)
	{
		i++;
		v &= (v - 1);
	}
	return (i);
}
