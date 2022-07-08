#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to list_t
*
* Return: number of elements in linked list_t list
*/

size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	else
	{
		count = 0;
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
