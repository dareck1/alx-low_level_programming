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
	if (d == NULL)
		return;
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)");
		else
			printf("%s\n", d->name);
		printf("%f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("%s\n", d->owner);
	}
}
