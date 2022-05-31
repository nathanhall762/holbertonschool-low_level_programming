#include "main.h"

/**
* print_triangle - prints a triangle of n size
* @size: size of triangle
*/

void print_triangle(int size)
{
	int x;
	int y;
	int spacecount;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			spacecount = (size - y);
			for (x = 0; x < size; x++)
			{
				if (x < spacecount)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
