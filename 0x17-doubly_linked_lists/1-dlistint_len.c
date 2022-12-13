#include "lists.h"
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: returns the number of elements in a linked
 *
 */
size_t dlistint_len(const dlistint_t *h) {
  size_t i = 0;
  while (h != NULL) {
    h = h->next;
    i++;
  }
  return i;
}