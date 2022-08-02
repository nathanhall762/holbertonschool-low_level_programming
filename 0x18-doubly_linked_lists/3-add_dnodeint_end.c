#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list
* @head: head
* @n: integer to add to node
*
* Return: address of the new element or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *tmp, *new;

    if (head == NULL)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    tmp = *head;

    if (*head == NULL)
    {
        *head = new;
        new->prev = NULL;
        return (new);
    }

    while (tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = new;
    new->prev = tmp;

    return (new);
}
