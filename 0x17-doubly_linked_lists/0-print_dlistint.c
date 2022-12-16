#include "lists.h"
#include <stdio.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: print all the elements of a dlistint_t list
 *
 */
size_t print_dlistint(const dlistint_t *h) {
  size_t i = 0;
  while (h != NULL) {
    printf("%d\n", h->n);
    h = h->next;
    i++;
  }
  return i;
}