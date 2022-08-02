#include "lists.h"

/**
* delete_dnodeint_at_index - prints all the elements of a list backwards
* @head: head
* @index: index of the node that should be deleted
*
* Return: 1 if succeeded, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *playhead = NULL, *tmp = NULL;
    unsigned int len;

    if (head && *head)
    {
    	while (head != NULL)
        {
            len++;
            head = head->next;
        }
        if (index > len)
            return (-1);

        playhead = 
    }
}