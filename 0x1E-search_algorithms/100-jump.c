#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search - Enter point
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value searched
 *
 * Return: the first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t squart, i, jump, j;
	
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	squart = sqrt(size);
	jump = squart;
	j = 0;

	for ( i = 0; i < size; i++)
	{
		printf("Value checked array[%ld]: [%d]\n", i, array[i]);
		if (array[j] <= value && value <= array[jump])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", j, jump);
		}
	
		if (array[i] == value)
		{
			return (i);
		
		}
		j = jump;
		jump += squart;
	
	}
	return (-1);
}
