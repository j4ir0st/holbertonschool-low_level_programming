#include "main.h"

/**
 * swap_int - swap the value of two variables
 *
 * @a: pointer of first variable
 * @b: pointer of second variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
