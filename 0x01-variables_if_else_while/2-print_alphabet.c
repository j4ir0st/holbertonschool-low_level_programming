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
		putchar(l);
		l++;

	}
	while (l <= 'z');

	printf("\n");

	return (0);
}
