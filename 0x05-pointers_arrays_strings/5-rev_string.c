#include "main.h"

/**
* rev_string - reverses a string
* @s: string
*/

void rev_string(char *s)
{
	int len;
	int right, left, i, tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	left = 0;
	right = len - 1;
	for (i = left; i < right; i++)
	{
		tmp = s[i];
		s[i] = s[right];
		s[right] = tmp;
		right--;
	}
}
