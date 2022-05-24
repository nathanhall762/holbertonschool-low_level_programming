#include "main.h"

/**
* times_table - makes Nathan angry
*/

void times_table(void)
{
	int x = 0;
	int y = 0;
	int z;

	for (y = 0; y <= 9; y++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
			for (x = 1; x <= 9; x++)
			{
				z = (x * y);
				if ((z / 10) > 0)
				{
					_putchar((z / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((z % 10) + '0');
				if (x < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
	}
}
