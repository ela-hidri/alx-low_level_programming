/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: prefix substring.
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;
	unsigned int exist = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		exist = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				exist = 1;
				break;
			}
		}
		if (exist == 0)
			break;
		c++;
	}
	return (c);
}
