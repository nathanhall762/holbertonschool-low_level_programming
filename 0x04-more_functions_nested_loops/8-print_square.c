#include "main.h"

/**
* print_square - prints a squar of n size
* @size: size of block
*/

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
