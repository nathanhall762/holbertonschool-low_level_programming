#include "main.h"

/**
* _islower - finds if c is lower than 0
*
* @c: integer of _islower
*
* Return: 1 if lower, 2 if else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
