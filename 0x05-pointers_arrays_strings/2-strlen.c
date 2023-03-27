/**
 * _strlen -  returns the length of a string.
 * @c: pointer of a stirng to return it's length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i ;
	
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
