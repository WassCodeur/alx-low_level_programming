#include <stdlib.h>

#include "lists.h"
/**
  * add_dnodeint_end - add a new node at the end of dlistint_t
  * @head: pointer of pointer to the first dlistint_t
  * @n: new element to add
  *
  * Return: the address of the new node or NULL if failled
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	return (new);

}
