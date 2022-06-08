#include "holberton.h"

/**
* cap_string - capitalizes all words of a string
* @str: string
* Return: char
*/

char *cap_string(char *str)
{
	int i, cap, sepx;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	cap = 32;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - cap;
		}
		cap = 0;
		for (sepx = 0; sepx < 12; sepx++)
		{
			if (str[i] == separators[sepx])
				{
					cap = 32;
					sepx = 12;
				}
		}
	}
	return (str);
}
