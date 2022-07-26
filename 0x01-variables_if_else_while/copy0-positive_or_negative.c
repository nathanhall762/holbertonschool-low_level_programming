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
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if ( n < 0 )
	printf("is negative\n");
	else if ( n == 0 )
	printf("is zero\n");
	else
	printf("is positive\n");

	return (0);
}
