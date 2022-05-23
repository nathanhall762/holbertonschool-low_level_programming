#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main
 *
 * putchar - print character
 *
 * Return: always 0
*/

int main(void)
{
	char ch = 'z';
	char n = '\n';

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(n);

	return (0);
}
