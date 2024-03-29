#include "lists.h"

/**
* print_dlistint - prints all the elements of a list
* @h: list to print
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++len;
		h = h->next;
	}

	return (len);
}
