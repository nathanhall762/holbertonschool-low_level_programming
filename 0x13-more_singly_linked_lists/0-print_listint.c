#include "lists.h"

/**
* print_listint - prints listint_t to stdout
* @h: head of list
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
