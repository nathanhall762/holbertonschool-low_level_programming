#include "main.h"

/**
* _memcpy - copies memory area
* @dest: string 1
* @src: string 2
* @n: length of string area
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
