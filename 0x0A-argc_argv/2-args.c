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

int main(int argc, char **argv)
{
	int i = 0;

	if (argc >= 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
