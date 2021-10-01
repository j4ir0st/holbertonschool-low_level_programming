#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';
	char L = 'A';

	do {
		putchar(l);
		l++;

	} while (l <= 'z');

	do {
		putchar(L);
		L++;

	} while (L <= 'Z');

	putchar('\n');

	return (0);
}
