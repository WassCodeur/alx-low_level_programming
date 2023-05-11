#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - Enter point
 * @size : the number of element is array
 * @value : the value we want to search in the array
 * @array : pointer to the first value
 *
 *
 * Return: where the value located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, d, left, right;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;
	do {
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		d = (left + right) / 2;
		if (array[d] > value)
		{
			right = d - 1;
		} else if (array[d] < value)
		{
			left = d + 1;
		} else if (array[d] == value)
		{
			return (d);
		}
	} while (left <= right);
	return (-1);

}
