#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
*
* Return: integer
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	i++;

	return (s1[i] - s2[i]);
}
