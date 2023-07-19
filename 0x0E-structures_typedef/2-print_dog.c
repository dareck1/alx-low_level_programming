#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: anything
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
		printf("nil");
	if (d == NULL)
		printf("\n");
	if (d != NULL)
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
