#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - function that searches for a value in a
 * sorted skip list of integers.
 *
 * @list: pointer to the head node of the skip list
 * @value: integer to search for
 * Return: a pointer to the node containing the integer
 * we are searching for
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list;
	skiplist_t *temp;

	while (curr)
	{
		temp = curr->express;
		if (curr->index > 0)
			printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (!curr->express || (curr->n <= value && curr->express->n >= value))
		{
			if (temp)
				printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
			printf("Value found between indexes [%lu] and [%lu]\n",
			 curr->index, (temp ? temp->index : curr->index));
			while (curr != (temp ? temp->next : NULL))
			{
				printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
				if (curr->n == value)
					return (curr);
				curr = curr->next;
			}
			return (NULL);
		}
		curr = temp;
	}
	return (NULL);
}
