#include <stdlib.h>
#include <stddef.h>
/**
 * tring_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 *
 * Return: pointer to new memory space, else null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int i = 0;
	unsigned int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (n >= l2)
		n = l2;
	ar = malloc((l1 + n) * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ar[i] = *s1;
		s1++;
		i++;
	}
	while (n > 0)
	{
		ar[i] = *s2;
		s2++;
		i++;
		n--;
	}
	ar[i] = '\0';
	return (ar);
}
