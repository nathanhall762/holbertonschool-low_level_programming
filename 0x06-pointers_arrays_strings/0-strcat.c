#include "holberton.h"

/**
* _strcat - concatenates two strings
* @dest: s1
* @src: s2
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int j, i;

	j = 0;
	i = 0;

	while (dest[j])
	{
		(j++);
	}
	while (src[i])
	{
		dest[j + i] = src[i];
		(i++);
		(j++);
	}

	return (dest);
}
