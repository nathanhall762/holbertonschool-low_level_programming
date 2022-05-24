#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
*
* _putchar - puts a char
*
* Return: always 0
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	for (n = 0; n <= 10; n++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
			if (n < 10)
			{
				if (c == 'z')
				{
					_putchar('\n');
					((c = '`'));
					(n++);
				}
			}
		}
	}
}
