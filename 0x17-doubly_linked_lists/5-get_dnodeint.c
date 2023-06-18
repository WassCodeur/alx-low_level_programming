#include <stdlib.h>
#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node
  * @head: pointer to the first node
  * @index: index of the node to return
  *
  * Return: nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp, *nth;

	tmp = head;
	i = 0;
	while (tmp != NULL)
	{
		if (index == i)
		{
			nth = tmp;
		}
		i++;
		tmp = tmp->next;
	}
	if (index > i)
	{
		return (NULL);
	}
	return (nth);
}
