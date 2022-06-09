#include "main.h"

/**
* _strpbrk - searches a string for any set of a set of bytes
* @s: first string
* @accept: second string
*
* Return: s or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
	}
	return (s);
}
