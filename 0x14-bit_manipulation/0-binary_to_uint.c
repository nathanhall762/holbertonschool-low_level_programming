#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}
