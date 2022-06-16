#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new memory space with string parameter
* @size: size of array
* @c: character
*
* Return: NULL if array write fails or size is 0, else array
*/

char *_strdup(char *str)
{
	char *array;
	int i;

	if ((str == NULL))
	{
		return (NULL);
	}
	while (*str)
	{
		array[i] = str[i];
		i++;
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
