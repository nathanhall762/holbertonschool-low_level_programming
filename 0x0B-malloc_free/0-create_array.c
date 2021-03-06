#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of array
* @c: character
*
* Return: NULL if array write fails or size is 0, else array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc((sizeof(char) * size));

	if ((size == 0 || array == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
