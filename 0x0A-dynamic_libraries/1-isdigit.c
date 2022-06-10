#include "main.h"

/**
* _isdigit - finds if int c is digit
* @c: variable
*
* Return: 1 if c is digit, 0 if else
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
