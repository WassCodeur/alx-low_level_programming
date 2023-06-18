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
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (tmp != NULL)
	{
		if (idx == i)
		{
			new->prev = tmp->prev;
			tmp->prev = new;
			new->next = tmp;
			tmp = new;
		}
		i++;
		tmp = tmp->next;
	}
	return (new);
}
