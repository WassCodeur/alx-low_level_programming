# include <stdio.h>
#include "search_algos.h"

/**
 * Enter point : binary_search
 *
 * Description  : function that searches for a value in an array of integers using the binary search algorithm
 * return
 */
int binary_search(int *array, size_t size, int value)    
{
int middle;
int returnValue;
size_t i;
size_t left;
size_t right;
left = 0;
right = size - 1;
do{
middle = (left + right)/2;
printf("Searching in array: ");
for ( i = left; i <= right; i++){
if(i < right){
printf("%d, ", array[i]);
}
if(i == right){
	printf("%d\n", array[i]);
}
}

if(value < array[middle]){
        right = middle -1;
} else if(value > array[middle]){
        left = middle + 1;
} else if (value == array[middle]){
returnValue = middle;
break;
}
if ( value < array[left] || value > array[right]){
	returnValue = -1;
}
}while(left <= right);
return returnValue;
}
