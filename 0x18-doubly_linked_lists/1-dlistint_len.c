#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: list
*
* Return: number of elements in linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
