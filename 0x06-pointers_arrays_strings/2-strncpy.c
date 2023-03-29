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
	int exist = 0;
	while(n >= 0)
	{
		*dest = *src;
		if (*dest == '\0')
			exist = 1;
		dest++;
		src++;
		n--;
	}
	if (exist == 1)
		*dest = '\0';
	return (s);
}
