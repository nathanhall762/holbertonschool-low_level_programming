#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: src 1
* @src: src 2
* @n: number of bytes
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	i = 0;

	while (dest[j])
	{
		(j++);
	}
	while (i < n)
	{
		if (src[i])
		{
			dest[j] = src[i];
			(i++);
			(j++);
		}
		else
		{
			break;
		}
	}

	return (dest);
}
