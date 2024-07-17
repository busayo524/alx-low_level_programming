#include "search_algos.h"

/**
 * linear_search - searches for values using linear search algorithm
 *
 * @array: is a pointer to the first element of the array
 * @size: is the number of element in the array
 * @value: is the number to search for
 *
 * Return: return -1 on failure and i on success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
