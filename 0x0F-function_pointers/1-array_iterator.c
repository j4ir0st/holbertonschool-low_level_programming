#include <stdio.h>

/**
 * array_iterator - entry point
 * @array: array argument
 * @size: size_t argument
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
