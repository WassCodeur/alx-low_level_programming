#include <stdlib.h>
#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to the first node
  *
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *next;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
