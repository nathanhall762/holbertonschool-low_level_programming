#include "main.h"

/*
*
*/

void times_table(void)
{
	int x = 0;
	int y = 0;

	for (y = 0; y <= 9; y++)
	{
		_putchar((x * y) + 48);
		if (y < 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
}
