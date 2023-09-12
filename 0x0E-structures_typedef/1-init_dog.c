#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a structer
 *
 * @d: pointer pointing to struct dog
 * @name: element1
 * @age: element2
 * @owner: element3
 *
 * Return: anything
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
