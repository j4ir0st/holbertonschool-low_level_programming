#include "main.h"
/**
 * *_strncat - concatenates 2 strings
 * @dest: destination char argument
 * @src: source char argument
 * @n: int argument
 * Return: returns dest as string
 */
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (dest[c])
	{
		c++;
	}
	while (src[d] != src[n])
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
