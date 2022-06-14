#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

/**
* main - entry point
* @argc: cmd line argmt count
* @argv: cmd line argmt strngs
*
* Return: integer
*/

int main(int argc,  char **argv)
{
	UNUSED(argv);
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
