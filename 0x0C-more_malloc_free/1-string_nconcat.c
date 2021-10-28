#include <stdlib.h>
#include <string.h>

char write_str(char *str, char *str1, int len);
/**
 * string_nconcat - imput
 * @s1: char argument
 * @s2: char argument
 * @n: int argument
 * Return: returns str
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
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 <= n)
	{
		c = len2;
	}
	else
	{
		c = n;
	}
	str = malloc(sizeof(char) * (len1 + c + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	write_str(str, s1, len1);

	if (n >= len2)
	{
		write_str(str[len1 - 1], s2, len2);
		*(str + (c - 1) + d) = '\0';
	}
	else
	{
		write_str(str[len1 - 1], s2, n);
		*(str + (c - 1) + d) = '\0';
	}
	return (str);
}

/**
 * write_str - imput
 * @str: char argument
 * @str1: char argument
 * @len: int argument
 * Return: returns 0
 */

char write_str(char *str, char *str1, int len)
{
	int c;

	for (c = 0; c <= len; c++)
	{
		*(str + c) = *(str1 + c);
	}
}
