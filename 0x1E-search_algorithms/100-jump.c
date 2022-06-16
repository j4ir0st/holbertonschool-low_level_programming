#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, jump = 0, i = 0;

	if (!array)
                return (-1);

	jump = floor(sqrt(size));
	while (right < size && array[right] < value)
	{
		left = right;
		right = right + jump;
		printf("Value checked array[%li] = [%i]\n", left, array[left]);
	}
	printf("Value found between indexes [%li] and [%li]\n", left, right);
	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
                        return (i);
	}
	return (-1);
}
