#include "function_pointers.h"

/**
* int_index - finds first index of matching int
* @array: array
* @size: size of array
* @cmp: function pointer
*
* Return: -1 if no match, else first of int match
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
