#include "function_pointers.h"

/**
* array_iterator - iterates through array
* @array: array
* @size: size of array
* @action: pointer to function used
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
