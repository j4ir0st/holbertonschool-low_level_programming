#include <stdlib.h>

/**
 * _calloc - imput
 * @nmemb: unsigned int argument
 * @size: unsigned int argument
 * Return: str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < nmemb * size; c++)
	{
		*(str + c) = 0;
	}
	return (str);
}
