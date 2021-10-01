#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'z';

	do {
		putchar(l);
		l--;

	} while (l >= 'a');

	putchar('\n');

	return (0);
}
