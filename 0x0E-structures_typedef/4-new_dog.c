#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer where to copy
 * @src: from where copy
 *
 * Return: copied value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - declare a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;
	int ln = 0, lo = 0;

	if (name == NULL || age < 0  || owner == NULL)
		return (NULL);
	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;
	newd->name = malloc(sizeof(char) * (ln + 1));
	if (newd->name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (lo + 1));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	_strcpy(newd->name, name);
	newd->age = age;
	_strcpy(newd->owner, owner);
	return (newd);

}
