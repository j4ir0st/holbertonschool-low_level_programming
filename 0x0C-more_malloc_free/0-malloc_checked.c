#include <stdlib.h>

/**
 * malloc_checked - imput
 * @b: int argument
 * Return: returns str
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
