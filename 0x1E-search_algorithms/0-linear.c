#include "search_algos.h"

/**
 * linear search - searches for values sequentially in an array of elements
 * the question uses linear algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of element in the array
 * @value: is the number to search for
 *
 * Return: return the first index when value is present and return -1 when value is not present or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return -1;
	}

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	return -1;
}
