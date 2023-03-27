/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer where to copy
 * @src: from where copy
 *
 * Result: copied value
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
