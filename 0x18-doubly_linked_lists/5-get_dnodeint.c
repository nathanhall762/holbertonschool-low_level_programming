#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a linked list
* @head: head
* @index: index of the node, starting from 0
*
* Return: nth node of linked list, or NULL if node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (head != NULL)
	{
		if (len == index)
			return (head);
		len++;
		head = head->next;
	}

	return (head);
}
