#include "main.h"
/**
 * _print_selected - function that selects the appropriate function
 * depending on the type of operator
 * @flag: pointer to the operator found after the flag %
 * Return: the number of char (bytes) printed
 */
int (*_print_selected(char *flag))(va_list * args)
{
	choose printer[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	int i = 0;

	while (printer[i].op != NULL && printer[i].op[0] != '\0')
	{
		if (printer[i].op[0] == *flag)
			return (printer[i].func);

	i++;
	}
	return (0);
}

/**
 * _printf - function that prints char , string , int ...
 * @format: pointer to the string of arguments of different types
 *
 * Return: the number of char (bytes) printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int char_count = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			char_count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != 'c' && format[i + 1] != 's'
				 && format[i + 1] != 'd' && format[i + 1] != 'i')
		{
			_putchar('%');
			_putchar(format[i + 1]);
			char_count += 2;
			i++;
		}
		else
		{
			char_count += (*_print_selected((char *)&format[i + 1]))(&args);
			i++;
		}
	i++;
	}
	va_end(args);
	return (char_count);
}
