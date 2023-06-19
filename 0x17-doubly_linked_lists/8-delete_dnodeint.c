#include <stdlib.h>
#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *new;
	unsigned int i;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	i = 0;
	while (index >= i)
	{
		if (index == i)
		{
			break;
		}
		tmp = tmp->next;
		i++;
	
	}
	new = tmp->next;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp = NULL;
	tmp = new;
	
	return (1);

}
