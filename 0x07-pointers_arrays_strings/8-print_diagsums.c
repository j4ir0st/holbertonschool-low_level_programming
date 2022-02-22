#include "main.h"

/**
 * print_diagsums - check the code
 * @a: pointer to matrix
 * @size: size of the matrix
 * Return: None
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
