#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * printf - Prints string
 *
 * rand - random
 *
 * srand - random
 *
 * Return: return 0
*/

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
/*	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	your code goes there
*/	printf("%d ", i);
	if (i > 0)
	{
		printf("is positive\n");
	}
	else if (i == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
/*	return (0);*/
}
