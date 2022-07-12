#include "lists.h"

/**
* free_listint2 - free list and sets head to NULL
* @head: head of list
*/

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
