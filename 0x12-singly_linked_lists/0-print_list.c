#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to list_t
*
* Return: number of elements in a linked list_t list
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		if (h->str != NULL)
			printf("[%hu] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
