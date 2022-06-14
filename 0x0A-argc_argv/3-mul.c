#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: cmd line argmt count
* @argv: cmd line argmt strngs
*
* Return: integer
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result = a * b;

	if (argc = 2)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
