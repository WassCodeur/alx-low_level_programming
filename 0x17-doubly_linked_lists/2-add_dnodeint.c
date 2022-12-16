#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: adds a new node at the beginning of a dlistint_t list.
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
  dlistint_t *new;
  new = malloc(sizeof(dlistint_t));
  if (new == NULL) {
    return NULL;
  }
  new->n = n;
  new->next = *head;
  new->prev = NULL;
  if (*head != NULL) {
    (*head)->prev = new;
  }
  *head = new;
  return new;
}