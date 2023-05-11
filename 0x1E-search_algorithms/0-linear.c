#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - Enter point
 * @array : a pointer to the first element to array
 * @size  : the number of element in the array
 * @value : the value to search in the array
 *
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{

size_t i;
for (i = 0; i < size; i++)
{

printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
