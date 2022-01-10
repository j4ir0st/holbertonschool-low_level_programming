#include "main.h"

/**
 * print_square - Entry point
 * @size: sixe of the square
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	while (x < size)
	{
		while (y < size)
		{
			_putchar(35);
			y++;
		}
		_putchar(10);
		x++;
		y = 0;
	}
	if (x <= 0)
	{
		_putchar(10);
	}
}
