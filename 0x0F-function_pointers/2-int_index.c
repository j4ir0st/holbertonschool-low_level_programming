#include <stdio.h>

/**
 * int_index - entry point
 * @array: array argument
 * @size: int argument
 * @cmp: function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
		{
			return (c);
		}
	}
	return (-1);
}
