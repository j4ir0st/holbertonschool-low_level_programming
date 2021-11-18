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
		printf("0");
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
			printf("%d", (n & mask) ? 1 : 0);
		}
		mask >>= 1;
	}
}
