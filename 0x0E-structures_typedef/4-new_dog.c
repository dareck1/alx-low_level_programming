#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p, my_dog;

	p = malloc(sizeof(my_dog));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (name == NULL || owner == NULL)
		return (NULL);
	p->name = malloc(strlen(name) + 1);
	if (p->name == NULL)
	{
		free(p->name);
		return (NULL);
	}
	p->name = strcpy(p->name, name);
	p->owner = malloc(strlen(owner) + 1);
	if (p->owner == NULL)
	{
		free(p->owner);
		return (NULL);
	}
	p->owner = strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
