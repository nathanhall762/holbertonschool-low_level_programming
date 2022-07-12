#include "lists.h"
#include <string.h>

/**
* add_nodeint_end - adds a new node at the end of a list_t list
* @head: address of head node
* @n: str to add into node
*
* Return: the address of the new element of NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

/*
*to add node in middle of linked list:
*change temp->next to temp->str and
*NULL to whatever the str in the node before insertion point is
*/
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
