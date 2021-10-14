#include <stdio.h>
/**
 * _atoi - converts strings to integers
 * @s: char argument
 */

int _atoi(char *s)
{
	int c = 0;
	int sgn = 0;
	int n = 0;
	int d = 0;

	while(s[c])
	{
		if(s[c] == 45)
		{
			sgn++;
		}
		if (s[c] >= 48 && s[c] <= 57)
		{
			if (n > 0)
			{
				n = n*(10^d);
				d++;
			}
			n = n + (s[c] - 48);
		}
		c++;
	}
	if (sgn % 2 != 0)
	{
		n = n * (-1);
	}
	return (n);
}
