#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("1%s\n", s1);
    printf("2%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("3%s\n", s1);
    printf("4%s", s2);
    printf("5%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("6%s", s1);
    printf("7%s", s2);
    printf("8%s", ptr);
    return (0);
}
