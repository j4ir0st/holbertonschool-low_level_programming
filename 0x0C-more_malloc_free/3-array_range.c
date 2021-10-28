#include <stdlib.h>

/**
 * array_range - imput
 * @min: int argument
 * @max: int argument
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *arr;

	arr = malloc (sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (; min < max; min++)
	{
		*(arr + min) = min;
	}
	return (arr);
}
