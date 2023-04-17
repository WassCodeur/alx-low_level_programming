# include <stdio.h>
#include "search_algos.h"

/**
 * Enter point : linear_search
 *
 * Description  : function that searches for a value in an array of integers using the Linear search algorithm
 * return
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
int result;
result = -1;
for( i = 0; i < size; i++ )
{
if(array[i] == value)
{
	printf("Value checked array[%ld] = [%d]\n", i,  array[i]);
	result = i;
break;
}
else{
	printf("Value checked array[%ld] = [%d]\n", i,  array[i]);
}
}
return result;
}
