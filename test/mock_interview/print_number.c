#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_number(int n);
int _putchar(char c);

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}

void print_number(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	printf("%d", n);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
