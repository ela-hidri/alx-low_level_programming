/**
 * _strchr -  locates a character in a string.
 * @c: character to look for
 * @s: string to look in
 *
 * Return: to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while(*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{	
			break;
		}
		i++;
		s++;
	}
	if (i != 0)
		s++;
	return (s);
}
