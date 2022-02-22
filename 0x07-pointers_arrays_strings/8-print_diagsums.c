#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, diag_p = 0, diag_s = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		diag_p += a[i];
	}
	printf("%i, ", diag_p);
	for (i = size - 1; i < (size * size) - (size - 1); i += size - 1)
	{
                diag_s += a[i];
	}
	printf("%i\n", diag_s);
}
