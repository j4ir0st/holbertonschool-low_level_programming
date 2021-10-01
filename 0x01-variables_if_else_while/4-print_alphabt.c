#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	do {
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;

	} while (l <= 'z');

	putchar('\n');

	return (0);
}
