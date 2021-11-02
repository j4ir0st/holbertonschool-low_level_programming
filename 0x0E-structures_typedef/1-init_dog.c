#include "dog.h"

/**
 * init_dog - input
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: struct name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
