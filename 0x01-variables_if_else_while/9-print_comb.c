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
	int ch;
	int x = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (x <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		(x++);
	}
	putchar('\n');

	return (0);
}
