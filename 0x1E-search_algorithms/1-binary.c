#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, m = 0;

	if (!array)
		return (-1);

	right = size - 1;
	while (left < right)
	{
		print_array(array, left, right);
		m = floor((left + right) / 2);
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - Entry point
 * @array: pointer to the first element of the array to search in
 * @left: initial value of the array to print
 * @right: final value of the array to print
 */

void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	for (; left < right; left++)
	{
		printf("%i, ", array[left]);
	}
	printf("%i\n", array[left]);
}
