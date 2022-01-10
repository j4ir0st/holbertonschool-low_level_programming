#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
	}
	if (x <= 0)
	{
		_putchar(10);
	}

	return (0);
}
