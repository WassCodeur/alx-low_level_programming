#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head) {
    dlistint_t *tmp, *next;
    tmp = head;
    
    while (tmp != NULL) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
}

