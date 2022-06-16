#include "search_algos.h"

/**
 * interpolation_search - Entry point
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = 0, m = 0;
	int v = 0;

	if (!array)
		return (-1);

	h = size - 1;
	v = value;
	while ((array[h] != array[l]) && (v >= array[l]) && (v <= array[h]))
	{
		m = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
		printf("Value checked array[%li] = [%i]\n", m, array[m]);
		if (array[m] < v)
			l = m + 1;
		else if (v < array[m])
			h = m - 1;
		else
			return (m);
	}
	if (v == array[l])
		return (l);
	printf("Value checked array[%li] is out of range\n", h);
	return (-1);
}
