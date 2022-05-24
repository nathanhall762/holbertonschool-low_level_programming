#include "main.h"

/**
* print_alphabet - prints alphabet
*
* _putchar - puts a char
*
* Return: always 0
*/
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
