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
	int **grid;
	int i;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(grid[i]);
			}

			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
