#include "main.h"

/**
* _strstr - locats a substring
* @haystack: string 1
* @needle: string 2
*
* Return: pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return (0);
}
