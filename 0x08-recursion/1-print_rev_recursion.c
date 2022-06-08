#include "main.h"

/**
* _print_rev_recursion - like puts in reverse, but using recursion
* @s: string
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
