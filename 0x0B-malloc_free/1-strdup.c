#include <stdlib.h>

/**
 * _strdup - return a pointer
 * @str: unsigned int argument
 * Return: returns 0
 */

char *_strdup(char *str)
{
	char *str1;
	unsigned int len;

	str1 = malloc (sizeof(char) * sizeof(str)/sizeof(char));
	if (str == NULL || str1 == NULL)
	{
		return (NULL);
	}
	for (len = 0; len <= sizeof(str) + 1; len++)
	{
		*(str1 + len) = *(str + len);
	}
	return (str1);
}
