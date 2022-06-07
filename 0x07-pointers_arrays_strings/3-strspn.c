#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: first string
* @accept: second string
*
* Return: number of bytes 
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				n++;
			else
				break;
			j++;
		}
	}
	return (n);
}
