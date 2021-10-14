#include <stdio.h>
/**
 * print_array - Entry point
 * @a: pointer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int m;
	for (m = 0; m < n; m++)
	{
		printf("%i", a[m]);

		if (m < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
