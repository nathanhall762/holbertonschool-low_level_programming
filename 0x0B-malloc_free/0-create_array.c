#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
* create_array - creates an array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (sizeof(char) * size)

	if (size == 0 || array = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c
	}
	return (0);
}
