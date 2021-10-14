#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: char variable
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int m = 0;

	while (s[m] != 0)
	{
		m++;
	}

	while (m > 0)
	{
		printf("%c", s[m]);
		m--;
	}
	printf("\n");
}
