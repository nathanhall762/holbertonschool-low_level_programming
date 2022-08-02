#include "lists.h"

/**
* free_dlistint - frees a list
* @head: head
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    tmp = NULL;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}
