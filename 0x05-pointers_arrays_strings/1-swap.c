/**
 * swap_int - swaps the values of two integers
 * @a : first value to swap
 * @b : second value to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
