#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	char l = 'a';

	do {
		putchar(n);
		n++;

	} while (n <= 57);

	do {
		putchar(l);
		l++;

	} while (l <= 'f');

	putchar('\n');

	return (0);
}
