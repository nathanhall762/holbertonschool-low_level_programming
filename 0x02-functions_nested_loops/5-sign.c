#include "main.h"

/**
* print_sign - prints te sign of a number
*
* @n: integer
*
* Return: 1 if positive -1 if negative 0 if zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
