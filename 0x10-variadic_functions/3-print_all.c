#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	va_list lst;
	int n = 0, i = 0;
	char *separator = ", ";
	char *str;

	va_start(lst, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(lst, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(lst, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(lst, double), separator);
			break;
		case 's':
			str = va_arg(lst, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(lst);
}
