#include "search_algos.h"

/**
 * binary_search - Uses binary search to search an array
 *
 * @array: pointer to array to be searched
 *
 * @size: number of elements in the array
 *
 * @value: the value to search for
 *
 * Return: Index where value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, half;
	int ret, retm;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
	if (size % 2 == 0)
		half = (size / 2) - 1;
	else
		half = size / 2;
	if (array[half] == value)
		return (half);
	else if (array[half] < value)
	{
		if (size % 2 == 0)
			ret = binary_search(&array[half + 1], half + 1, value);
		else
			ret = binary_search(&array[half + 1], half, value);
		if (ret == -1)
			return (-1);
		else
			return (ret + half + 1);
	}
	else
	{
		retm = (binary_search(array, half, value));
		if (retm == -1)
			return (-1);
		else
			return (retm);
	}
	return (-1);
}
