#include <stdio.h>

/**
* main - entry point
*
* Return: 0
*/

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 5 == 0 && x % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", x);
		printf(" ");
	}
	printf("\n");
	return (0);
}
