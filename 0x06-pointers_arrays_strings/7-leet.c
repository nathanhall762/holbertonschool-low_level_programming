#include "holberton.h"

/**
* leet - encodes a string into 1337
* @s: string
*
* Return: string
*/

char *leet(char *s)
{
	int i, j;
	char old[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (old[j] == *(s + i))
				*(s + i) = new[j];
		}
	}
	return (s);
}
