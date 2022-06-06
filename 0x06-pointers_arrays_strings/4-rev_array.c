#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n: sizeof
*/

void reverse_array(int *a, int n)
{
	int len = n;
	int right, left, i, tmp;

	left = 0;
	right = len - 1;
	for (i = left; i < right; i++)
	{
		tmp = a[i];
		a[i] = a[right];
		a[right] = tmp;
		right--;
	}
}
