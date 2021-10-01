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
	int m = 49;
	int c = 1;

	do {
		do {
			putchar(n);
			putchar(m);
			if (n <= 55)
			{
				putchar(a);
				putchar(b);
			}
			m++;
		} while (m <= 57);
		m = 49 + c;
		n++;
		c++;
	} while (n <= 56);

	putchar('\n');

	return (0);
}
