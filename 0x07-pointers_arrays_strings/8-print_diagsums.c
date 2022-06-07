#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of sqr matrix
* @a: array
* @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int sum1, i, j;

	sum1 = 0;
	j = 0;
	for (i = 0; i < size; i++)
		{
			sum1 = sum1 + a[i][j];
			j++;
		}
	printf("%d", sum1);
}
