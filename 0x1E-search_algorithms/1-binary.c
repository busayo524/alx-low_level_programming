#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 *
 * @array: pointer to the first element
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: -1 if not present and index if present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, i, mid;

	if (array == NULL)
	{
		return (-1);
	}

	l = 0;
	r = size - 1;
	
	while (l <= r)
	{
		printf("searching in array: ");
		for (size_t i = l; i <= r; i++)
		{
			if (i != l)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");
		
		mid = (l + r) / 2;
		
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			l =  mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return (-1);
}
