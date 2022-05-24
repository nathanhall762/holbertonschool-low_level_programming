#include "main.h"

/**
* jack_bauer - print 24 hours worth of time
*/

void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar ((H / 10) + '0');
			_putchar ((H % 10) + '0');
			_putchar (':');
			_putchar ((M / 10) + '0');
			_putchar ((M % 10) + '0');
			_putchar ('\n');
		}
	}
}
