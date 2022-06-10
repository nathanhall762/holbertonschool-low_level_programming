#include "main.h"
int squareroot(int n, int i);
/**
* _sqrt_recursion - sends n to squareroot function recursively
* @n: integer
* Return: 0
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}

/**
* squareroot - checks if square
* @n: integer
* @i: integer
* Return: integer
*/
int squareroot(int n, long i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
