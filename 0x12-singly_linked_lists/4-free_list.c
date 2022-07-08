#include "lists.h"
#include <stdio.h>

/**
* free_list - frees linked list nodes
* @head: pointer to head
*/

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
