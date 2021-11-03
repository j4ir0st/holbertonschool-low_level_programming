#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: structure pointer
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
