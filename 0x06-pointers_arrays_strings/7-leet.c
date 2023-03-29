/**
 * leet - encodes a string into 1337.
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char s[] = "aeotlAEOTL";
	char l[] = "4307143071";

	while (str[i])
	{
		j = 0;
		while (s[j])
		{
			if (str[i] == s[j])
				str[i] = l[j];
			j++;
		}
		i++;
	}
	return (str);
}
