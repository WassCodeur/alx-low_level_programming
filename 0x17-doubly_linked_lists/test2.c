#include <stdlib.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current_node;
    unsigned int i;

    if (h == NULL)
        return NULL;

    if (idx == 0 || *h == NULL)
        return add_dnodeint(h, n);

    current_node = *h;
    i = 0;
  while (idx > i)
    {
       /* if (current_node == NULL)
            return NULL;*/

        current_node = current_node->next;
        i++;
    }

    new_node = malloc(sizeof(dlistint_t));
    new_node->n = n;
    new_node->prev = current_node;
    new_node->next = current_node->next;
    current_node->next->prev = new_node;
    current_node->next = new_node;

    return new_node;
}

