#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure named dog
 *
 * @name: name od dog
 * @age: age of dog
 * @owner: owner
 *
 * Description: Define a new type struct dog with the following elements:
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
