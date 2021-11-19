#include "main.h"

/**
 * clear_bit - set to 0 the given bit
 * @n: the given number
 * @index: the bit to set
 * Return: the new number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	index = 1 << index;
	if (*n < index)
	{
		*n = 0;
		return (-1);
	}
	*n -= index;
	return (1);
}
