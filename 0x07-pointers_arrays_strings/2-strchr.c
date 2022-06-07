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
	char *ptr;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
	}
	ptr = &s[i];
	if (s[i] == '\0')
	{
		return ('\0');
	}
	else
	{
		return (ptr);
	}
}
