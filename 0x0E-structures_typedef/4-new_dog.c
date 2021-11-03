#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: char argument
 * @age: float argument
 * @owner: char argument
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	n_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->name, name);
	n_dog->age = age;
	n_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	strcpy(n_dog->owner, owner);
	return (n_dog);
}
