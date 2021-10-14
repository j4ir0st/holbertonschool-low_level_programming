#include <stdio.h>
/**
 * _atoi - converts strings to integers
 * @s: char argument
 * Return: returns n
 */

int _atoi(char *s)
{
	int c = 0;
	int sgn = 1;
	unsigned int n = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sgn *= -1;
		}
		if (s[c] >= 48 && s[c] <= 57)
		{
			n = (10 * n) + (s[c] - 48);
		}
		else if (n > 0)
		{
			break;
		}
		c++;
	}
	n = n * (sgn);
	return (n);
}
