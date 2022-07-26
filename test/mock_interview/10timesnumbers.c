#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, linex;

	for (linex = 0; linex < 10; linex++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
