#include <stdio.h>
#include "search_algos.h"
/**
 * Enter point : lenear_search
 * Function that search a number
 * 
 * parameters : array, size, value
 *
 * return : value lacation
 */
int linear_search(int *array, size_t size, int value)
{

size_t i;
for(i = 0; i < size; i++)
{

printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if(array[i] == value )
{
return i;
}
}
return -1;
}
