#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
*
* Return: NULL on failure, pointer else
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (a == NULL)
		return (NULL);
	while (*s1)
	{
		a[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		a[i] = *s2;
		i++;
		s2++;
	}
	return (a);
}
