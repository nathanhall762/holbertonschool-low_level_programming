#include "main.h"

/**
* more_numbers - prints the numbers, from 0 to 14, 10 times followed by a new line
*
* Return: void
*/

void more_numbers(void)
{
	int c;
	int lines;

	for (lines = 0; lines <= 10; lines++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c <= 9)
			{
				_putchar(c + '0');
			}
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
