#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: address of head node
* @str: str to add into node
*
* Return: the address of the new element of NULL if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (head == NULL)
		return (NULL);

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
