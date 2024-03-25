#include "main.h"


int (*_print_selected(char *flag))(va_list args);

/**
 * print_all - function that prints anything
 * @format: pointer to the string of arguments of different types
 *
 * Return: the number of char (bytes) printed
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	va_list args;
	va_start(args, format);

	if (format == NULL)
		return (0);

	while(format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
		}
		else
		{
			(*_print_selected(*format[i + 1]))(args);
		}
	i++;
	}
	va_end(args);
	return (count);
}

/**
 * _print_selected - function that selects the appropriate function
 * depending on the type of operator
 * @char: pointer to the operator found after the flag %
 *
 * Return: the number of char (bytes) printed
 */
int (*_print_selected(char *flag))(va_list args)
{
	select printer[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	int i = 0;

	while (printer[i].op != NULL && printer[i].op[0] != '\0')
	{
		if (printer[i].op == flag)
			return (printer[i].func(args));

	i++;
	}
	return (0);
}
