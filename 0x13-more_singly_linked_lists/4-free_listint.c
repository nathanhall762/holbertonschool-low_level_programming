#include "lists.h"

/**
* free_listint - frees listint_t list
* @head: head of list
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
		{
			free(head);
			head = head->next;
		}
}
