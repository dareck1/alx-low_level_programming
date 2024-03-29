#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - define a structure
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: the dog owner
 *
 * Description: Define a new type struct dog with the following elements:
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
