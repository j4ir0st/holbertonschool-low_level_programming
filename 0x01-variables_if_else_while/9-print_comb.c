#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int a = 44;
	int b = 32;

	do {
		putchar(n);
		if (n < 57)
		{
			putchar(a);
			putchar(b);
		}
		n++;
	} while (n <= 57);

	putchar('\n');

	return (0);
}
