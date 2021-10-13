#include "main.h"

/**
 * _strlen - Entry point
 * @s: char variable
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		n++;
	}
	return (n);
}
