#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: array
* @b: new char
* @n: number to replace
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		s[i] = b;
	}
	return (s);
}
