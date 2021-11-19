#include "main.h"

/**
 * flip_bits - the number of bits needed
 * @n: first number
 * @m: 2nd number
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;
	unsigned long int comp;

	comp = n ^ m;
	for (; comp; comp >>= 1)
	{
		if (comp & 1)
		{
			c++;
		}
	}
	return (c);
}
