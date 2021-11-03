#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - check the code
 * @d: structure pointer
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
