#include "main.h"

/**
* print_diagonal - prints diagonal line of n length
* @n: line length
*/

void print_diagonal(int n)
{
	int x;
	int spacecount = 0;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (; spacecount < x; spacecount++)
			{
				_putchar(' ');
			}
			(spacecount = 0);
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
