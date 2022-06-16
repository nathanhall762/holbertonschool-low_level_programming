#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dim array of ints
* @width: width of 2d array
* @height: height of 2d array
*
* Return: pointer to 2d array of ints
*/

int **alloc_grid(int width, int height)
{
	char *array = 0;
/*
* if width or height is <= 0, return NULL
*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

/*
*
*/


/*
* the function should return NULL on failure
*/
	if (array == 0)
	{
		return (NULL);
	}
	return (0);
}
