#include <stdlib.h>

/**
 * _str_concat - concatenates two strings
 * @s1: char argument
 * @s2: char argument
 * Return: returns s_conc
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int c, d, len1 = 0, len2 = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
        {
                len2++;
        }
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= len1; c++)
	{
		*(str + c) = *(s1 + c);
	}
	for (d = 0; d <= (len2 + 1); d++)
	{
		*(str + (c - 1) + d) = *(s2 + d);
	}
	return (str);
}
