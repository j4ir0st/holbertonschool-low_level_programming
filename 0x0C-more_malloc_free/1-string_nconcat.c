#include <stdlib.h>

/**
 * string_nconcat - imput
 * @s1: char argument
 * @s2: char argument
 * @n: int argument
 * Return: returns 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c, d, len1 = 0, len2 = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= len1; c++)
	{
		*(str + c) = *(s1 + c);
	}
	if (n >= len2)
	{
		for (d = 0; d <= len2; d++)
		{
			*(str + (c - 1) + d) = *(s2 + d);
		}
		*(str + (c - 1) + d) = '\0';
	}
	else
	{
		for (d = 0; d <= n; d++)
		{
			*(str + (c - 1) + d) = *(s2 + d);
		}
		*(str + (c - 1) + d) = '\0';
	}
	return (str);
}
