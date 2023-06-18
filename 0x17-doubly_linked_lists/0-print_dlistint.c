#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * print_dlistint - print content of dlistint_t
  * @h: pointer to the first node
  *
  * Return: number of content
  */
size_t print_dlistint(const dlistint_t *h)
{	size_t num;
	const dlistint_t *ptr = h;

	num = 0;
	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (num);
}
