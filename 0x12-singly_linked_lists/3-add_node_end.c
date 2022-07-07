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
	list_t *new = *head;

	if (head == NULL)
		return (NULL);

	while (**head->next != NULL)
		new = new->next;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	new->len = i + 1;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
