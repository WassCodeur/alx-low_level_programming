#include <stdlib.h>
#include "lists.h"
/**
  * sum_dlistint - returns sum of all n
  * @head: pointer to the first node
  *
  * Return: sum of all n
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	sum = 0;
	tmp = head;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);

}
