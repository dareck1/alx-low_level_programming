#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - structure named dog
 *
 * @name: name od dog
 * @age: age of dog
 * @owner: owner
 *
 * Description: Define a new type struct dog with the following elements:
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
