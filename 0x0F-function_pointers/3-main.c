#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: number of args
* @argv: arg string
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	(*get_op_func)(argv[3]);

	return (0);
}
