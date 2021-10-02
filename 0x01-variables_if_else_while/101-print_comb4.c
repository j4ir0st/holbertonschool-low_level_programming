#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m = 49;
	int o = 50;
	int a = 44;
	int b = 32;
	int c = 0;
	int d = 1;

	do {
		do {
			do {

				putchar(n);
				putchar(m);
				putchar(o);
				if (n <= 54)
				{
					putchar(a);
					putchar(b);
				}
				o++;
			} while (o <= 57);
			o = 50 + d + c;
			m++;
			d++;
		} while (m <= 56);
		c++;
		m = 49 + c;
		d = 1;
		o = 50 + c;
		n++;
	} while (n <= 55);

	putchar('\n');

	return (0);
}
