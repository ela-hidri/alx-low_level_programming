/**
 * _intern_sqrt_recursion - calcultes squre root result
 * @i: possible sqaure
 * @n: number to caluculate it's square
 *
 * Return: squre rot
 */
int _intern_sqrt_recursion(int i, int n)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_intern_sqrt_recursion(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: string
 *
 * Return: sqaure root
 */
int _sqrt_recursion(int n)
{
	return (_intern_sqrt_recursion(0, n));
}
