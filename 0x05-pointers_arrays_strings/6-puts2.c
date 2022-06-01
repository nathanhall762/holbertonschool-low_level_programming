#include "main.h"

/**
* puts2 - prints every other char of a string followed by a new line to stdout
* @str: string
*/

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
		if (str[len] != '\0')
			len++;
	}
	_putchar('\n');
}
