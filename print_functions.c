#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_char - writes a character
 * @args: The list of characters to print
 * Return: number of char printed (bytes)
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}


/**
 * print_str - writes a string
 * @args: The list of strings to print
 * Return: number of char printed (bytes)
 */
int print_str(va_list args)
{
	int i = 0;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}


