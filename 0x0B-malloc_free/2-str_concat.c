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
/*
* Declare variables.
*/
	char *s;
	int len;
	unsigned int i, j;

/*
* Get string length of s1 + s2.
*/
	len = strlen(s1) + strlen(s2);
/*
* Allocate new space for array of size s1 + s2 with null char.
*/
	s = malloc(len);

/*
* Copy str1 and str 2 into s.
*/
	for (i = 0; i < strlen(s1); i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j <= strlen(s2); j++)
	{
		s[i] = s2[j];
		i++;
	}
	if (s == NULL)
		return (NULL);
	return (s);
}
