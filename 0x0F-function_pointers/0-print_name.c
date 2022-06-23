#include "function_pointers.h"

/**
* print_name - passes pointer to function
* @name: string to print
* @f: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
