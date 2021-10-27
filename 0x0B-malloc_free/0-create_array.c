#include <stdlib.h>

/**
 * create_array - creates and array of chars using malloc
 * @size: unsigned int argument
 * @c: char argument
 * Return: returns 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int p;

	if(size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < size; p++)
	{
		*(arr + p) = c;
	}
        return (arr);
}
