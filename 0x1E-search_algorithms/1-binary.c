#include <stdio.h>
#include "search_algos.h"
/**
 * function make a binary search of a given value
 *
 * paramater : array, size, value
 *
 * return value location else -1
 */
int binary_search(int *array, size_t size, int value)
{

size_t i, d,left, right;
left = 0;
right = size - 1;
do {
printf("Searching in array: ");
for( i = left; i < right ; i++) {
printf("%d, ",array[i]);
}
printf("%d\n",array[i]);
d = (left + right)/2;
if(array[d] > value) {
right = d - 1;
}else if(array[d] < value ) {
left = d + 1;
}
else if(array[d] == value) {
return d;
}
}while(left <= right);
return -1;

}
