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
int print_char(va_list *args)
{
	char ch;

	ch = va_arg(*args, int);

	_putchar(ch);

	return (1);
}


/**
 * print_str - writes a string
 * @args: The list of strings to print
 * Return: number of char printed (bytes)
 */
int print_str(va_list *args)
{
	int i = 0;
	int char_count = 0;
	char *str;

	str = va_arg(*args, char *);

	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);

		char_count++;

	}
	return (char_count);
}

/**
 * print_number - function that prints an integer using a recursive function
 * @n: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_number(long int n)
{

	int char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		char_count = 1;
	}

	if (n == 0)
	{
		_putchar('0');
		char_count = 1;
		return (char_count);
	}
	if (n / 10)
	{

		char_count += print_number(n / 10);
	}

	_putchar(n % 10 + '0');
	char_count++;

	return (char_count);
}

/**
 * print_int - function that prints an integers
 * @args: The corresponding arguments of the list
 * containing the integers to print
 * Return: number of char printed (bytes)
 */
int print_int(va_list *args)
{
	int char_count = 0;

	int n = va_arg(*args, int);

	char_count = print_number(n);

	return (char_count);
}
