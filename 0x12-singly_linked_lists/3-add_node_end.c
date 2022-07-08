#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: address of head node
* @str: str to add into node
*
* Return: the address of the new element of NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	new->str = strdup(str);
	new->len = i;
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
