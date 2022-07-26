#include "holberton.h"
#include <unistd.h>

void print_alphabet_x10(void);
int _putchar(char c);

int main (void)
{
	print_alphabet_x10();
	return(0);
}

void print_alphabet_x10(void)
{
	int charx, linex;

	for (linex = 0; linex <= 9; linex++)
	{
		for (charx = 'a'; charx <= 'z'; charx++)
		{
			_putchar(charx);	
		}
	_putchar('\n');
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
