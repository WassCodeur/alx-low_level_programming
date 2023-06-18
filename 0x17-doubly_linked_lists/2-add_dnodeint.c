#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
  * add_dnodeint - add a new node at the beginning of dlistint_t
  * @head: pointer of the pointer to the first element of the dlistint
  * @n: number to add
  *
  * Return: address of the new element or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	else
	{
		new->next = NULL;
	}
	*head = new;
	return (new);

}
