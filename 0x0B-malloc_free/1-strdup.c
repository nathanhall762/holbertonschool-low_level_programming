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

/*
* Returns NULL if str = NULL.
*/
	if (str == NULL)
	{
		return (NULL);
	}

/*
* Count length of string.
*/
	for (last = 0; last <= *str; last++)
	{
	}
/*
* Allocate memory space for array and init array.
*/
	array = malloc(sizeof(char) * last);

/*
* Copy str into array.
*/
	for (i = 0; i < last; i++)
	{
		array[i] = str[i];
	}

/*
* Returns NULL if insufficient memory was available.
*/
	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
