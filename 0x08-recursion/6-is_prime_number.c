#include "main.h"

/**
* is_prime_number - checks if prime
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(1, n));
}

/**
* prime_helper - helps check if prime
* @i: counter
* @n: number to check
*
* Return: 1 if prime, 0 if not
*/

int prime_helper(long i, int n)
{
	if (i * i == n)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(i + 1, n));
}
