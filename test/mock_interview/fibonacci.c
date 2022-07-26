#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long num1, num2, numtmp, i;

	num1 = 1;
	num2 = 2;
	for (i = 0; i < 25; i++)
	{
		printf("%ld, %ld\n", num1, num2);
		num1 = num1 + num2;
		num2 = num1 + num2;
	}
	return (0);
}
