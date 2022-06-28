#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers
* @separator: string to be printed between chars
* @n: number of integers passed to function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, const unsigned int));

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(lst);
}
