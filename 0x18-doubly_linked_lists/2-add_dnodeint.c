#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list
* @head: list head
* @n: integer to add to node
*
* Return: the address of the new element or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	tmp = *head;
	*head = new;
	new->next = tmp;

	if (tmp != NULL)
		tmp->prev = *head;

	return (new);
}
