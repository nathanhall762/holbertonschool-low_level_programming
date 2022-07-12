#include "lists.h"

/**
* listint_len - return number of elements in a listint_t list
* @h: head of linked list
*
* Return: number of nodes in list
*/

size_t listint_len(const listint_t *h)
{
	int count ;

	if (h == NULL)
		return (0);

	else
	{
		count = 0;
		while (h != NULL)
		{
			h = h-> next;
			count ++;
		}
	}
	return (count);
}
