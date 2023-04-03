/**
 * _strchr -  locates a character in a string.
 * @c: character to look for
 * @s: string to look in
 *
 * Return: to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*(s) != '\0' && *(s) != c)
		s++;
	return (s);
}
