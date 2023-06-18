#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * dlistint_len - return the number of element in dlistint_t
  * @h: pointer to the first node
  *
  * Return: number of element in dlistint_t
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t num;

	num = 0;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
