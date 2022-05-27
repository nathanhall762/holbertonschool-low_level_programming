#include "main.h"

/**
* _isupper - finds if int c is upper case or not
*
* Return: 1 if upper, 0 if else
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
