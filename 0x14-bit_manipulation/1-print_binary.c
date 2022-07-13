#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: a number
*/

void print_binary(unsigned long int n)
{
	int i = 0, count, k, temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}

