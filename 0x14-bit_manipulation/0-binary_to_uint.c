#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary as char
 * Return: Integer
 */

unsigned int binary_to_uint(const char *b)
{
	int c = 0, i = 0;
	unsigned int n = 0;

	c = strlen(b) - 1;
	while (c >= 0)
	{
		switch (*(b + c))
		{
		case '1':
			n = n + pow(2, i);
			i++;
			break;
		case '0':
			i++;
			break;
		default:
			return (0);
			break;
		}
		c--;
	}
	return (n);
}
