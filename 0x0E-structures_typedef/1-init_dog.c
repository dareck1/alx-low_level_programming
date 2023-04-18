#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a structure
 *
 * @d: element 0
 * @name: element 1
 * @age: element 2
 * @char: element 3
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
