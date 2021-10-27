#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return a pointer
 * @str: unsigned int argument
 * Return: returns 0
 */

char *_strdup(char *str)
{
	char *str1;
	unsigned int c, len = 0;

	while (str[len])
	{
		len++;
	}
	str1 = malloc(sizeof(char) * (len + 1));
	if (*str == NULL || str1 == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= (len + 1); c++)
	{
		*(str1 + c) = *(str + c);
	}
	return (str1);
}
