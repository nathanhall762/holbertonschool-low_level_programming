#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*/

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	(*get_op_func)(argv[3]);

/*
	if
	{
		
	}
	if
	{
		
	}
*/
	return (0);
}
