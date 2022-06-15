#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: number of args
* @argv: amount of money
*
* Return: 1 if error, 0 if good
*/

int main(int argc, char *argv[])
{
	int coins = 0, number = (atoi(argv[1]));

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (number < 0)
	{
		printf("0\n");
	}
	if (number >= 25)
	{
		coins += number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		coins += number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		coins += number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		coins += number / 2;
		number = number % 2;
	}
	if (number >= 1)
	{
		coins += number;
	}
	printf("%d\n", coins);
	return (0);
}
