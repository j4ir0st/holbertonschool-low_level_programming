#include <stdio.h>

/**
 * *_strcat - Entry point
 * @dest: destination char argument
 * @src: source char argument
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[c])
	{
		c++;
	}
	while (src[d])
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	return (dest);
}
