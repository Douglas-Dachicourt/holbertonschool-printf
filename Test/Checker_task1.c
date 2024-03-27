#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int l = (unsigned int)INT_MAX + 1024;
	long int lon = (unsigned int)INT_MIN - 1024;

	_printf("%d\n", -1024);
	printf("%d\n", -1024);
	_printf("%d\n", 0);
	printf("%d\n", 0);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	_printf("%d\n", l);
	printf("%d\n", l);
	_printf("%d\n", lon);
	printf("%d\n", lon);
	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%i\n", 1024);
	printf("%i\n", 1024);
	_printf("%i\n", -1024);
	printf("%i\n", -1024);
	_printf("%i\n", 0);
	printf("%i\n", 0);
	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	_printf("%i\n", l);
	printf("%i\n", l);

	return (0);
}
