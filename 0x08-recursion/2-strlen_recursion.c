/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string
 * 
 * Return: longth of int
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l +=  _strlen_recursion(++s);
	}
	return (l);
}
