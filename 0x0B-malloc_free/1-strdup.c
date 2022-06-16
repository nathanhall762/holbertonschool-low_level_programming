#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a new memory space with string parameter
* @str: string
*
* Return: NULL if array write fails or size is 0, else array
*/

char *_strdup(char *str)
{
	char *array;
	int i, last;

	if (str == NULL)
	{
		return (NULL);
	}
	for (last = 0; last <= *str; last++)
	{
	}
	last += 1;
	array = malloc(sizeof(char) * last);
	for (i = 0; i <= last; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
