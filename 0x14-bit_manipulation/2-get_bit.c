#include "main.h"

/**
 * get_bit - return the value of given bit
 * @n: binary number
 * @index: bit searched
 * Return: Always value of index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0;

	while (c < index)
	{
		n >>= 1;
		c++;
	}
	return (n & 1);
}
