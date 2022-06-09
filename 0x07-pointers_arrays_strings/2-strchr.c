#include "main.h"

/**
* _strchr - locates a character in a string
* @s: first string
* @c: character to locate
*
* Return: first occurence of c
*/

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
