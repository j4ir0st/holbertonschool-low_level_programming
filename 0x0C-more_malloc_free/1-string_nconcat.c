#include <stdlib.h>
#include <string.h>

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
	unsigned int c, d, len1, len2;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1 == '\0')
	{
		len1++;
	}
	while (s2 == '\0')
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
