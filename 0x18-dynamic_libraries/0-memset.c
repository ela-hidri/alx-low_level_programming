/**
 * _memset -  fills memory with a constant byte.
 * @n: n bytes to fill
 * @s: pointed to memory area
 * @b: constant to fill the memory with
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
