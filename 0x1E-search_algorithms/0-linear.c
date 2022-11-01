#include "search_algos.h"

/**
 * linear_search - Uses linear search to search an array
 *
 * @array: pointer to array to be searched
 *
 * @size: number of elements in the array
 *
 * @value: the value to search for
 *
 * Return: Index where value is located or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
