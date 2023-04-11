#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to now concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i = 0;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ar = malloc(l1 * sizeof(s1) + l2 * sizeof(s2) + 1);
	if (ar == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ar[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ar[i] = *s2;
		s2++;
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
