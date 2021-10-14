#include <stdio.h>
/**
 * rev_string - Entry point
 * @s: char variable
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int m = 0;
	int n = 0;
	char tmp[100];

	while (s[m] != 0)
	{
		tmp[m]=s[m];
		m++;
	}
	m--;
	while (m >= 0)
	{
		s[m] = tmp[n];
		m--;
		n++;
	}
}
