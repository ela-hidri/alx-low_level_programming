/**
 * _strncat - concatenates two strings.
 * @dest: fist string
 * @src: second string
 * @n: n byte from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (s);
}
