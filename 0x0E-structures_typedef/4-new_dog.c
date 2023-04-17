#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);
	newd->name = name;
	newd->age = age;
	newd->owner = owner;
	return (newd);

}
