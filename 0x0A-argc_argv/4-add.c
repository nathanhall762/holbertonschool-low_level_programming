#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: cmd line argmt count
* @argv: cmd line argmt strngs
*
* Return: 1 if cmd line arg not #, else 0
*/

int main(int argc, char *argv[])
{
	int i, result;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
