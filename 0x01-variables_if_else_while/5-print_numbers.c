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
	char ch = '0';
	char n = '\n';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar(n);

	return (0);
}
