#include "dog.h"
#include <stddef.h>
/**
 * init_dog - init dog
 * @d: struct dog
 * @name: name dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
