#include "main.h"

/**
 * print_binary - print the binary of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	int dec = 0;
	unsigned int mask = UINT_MAX - INT_MAX;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (mask)
	{
		if (n & mask)
		{
			dec += mask;
		}
		if (dec != 0)
		{
			if (n & mask)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
		mask >>= 1;
	}
}
