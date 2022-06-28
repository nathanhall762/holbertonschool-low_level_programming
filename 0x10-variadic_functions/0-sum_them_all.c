#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: number of parameters
* @...: variadic parameters
*
* Return: 0 if n==0, else sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list lst;

	if (n == 0)
		return (0);
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, const unsigned int);
	}

	va_end(lst);

	return (sum);
}
