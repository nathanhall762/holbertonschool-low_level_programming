#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a new memory space with string parameter
* @str: string
*
* Return: NULL if array write fails or size is 0, else array
*/

char *_strdup(char *str)
{
	char *array;
	int i = 0, len;

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
	len = strlen(str);
/*
* Allocate memory space for array and init array.
*/
	array = malloc(len * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

/*
* Copy str into array.
*/
	while (i < len)
	{
		array[i] = str[i];
		i++;
	}

/*
* Returns NULL if insufficient memory was available.
*/
	return (array);
}
