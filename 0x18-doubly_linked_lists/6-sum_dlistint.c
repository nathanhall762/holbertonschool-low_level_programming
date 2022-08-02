#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a linked list
* @head: head
*
* Return: sum of all the data of a linked list, 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
