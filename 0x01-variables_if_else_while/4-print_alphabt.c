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
	char ch = 'a';
	char n = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar(n);

	return (0);
}
