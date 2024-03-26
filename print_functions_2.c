#include "main.h"

/**
 * print_i - function that prints an integers or an hexadecimal
 * or an octal number
 * @args: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_i(va_list args)
{
	unsigned int n = va_arg(args, int);

	print_number(n);

	return (0);
}
