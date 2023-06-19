#include <stdlib.h>
#include "lists.h"
/**
  * insert_dnodeint_at_index - insert new node
  * @h: pointer of pointer to the first node
  * @idx: index
  * @n: element of the new node
  *
  * Return: address of the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = *h;
	if (h == NULL)
		return (NULL);
	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	idx = idx - 1;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (i < idx)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		i++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = tmp;
	tmp->next = new;
	return (new);
}
