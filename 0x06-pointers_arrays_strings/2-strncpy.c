/**
 * _strncpy - copies a string
 * @dest: copy into
 * @src: string to be copied
 * %n: number of letters to copy
 *
 * Return: pinter to copied value
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;
	int j = 0;

	while(n > 0 && *src != 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
		j++;
	}
	while (j < n)
	{
		*dest = '\0';
		dest++;
		j++;
	}
	return (s);
}
