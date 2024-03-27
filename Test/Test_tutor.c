#include <stdarg.h>
#include <unistd.h>

typedef struct struc_print
{
char *op;
int (*func)(va_list *args);
} select;

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list *args)
{
	char ch;

	ch = va_arg(*args, int);

	_putchar(ch);

	return (1);
}

int print_str(va_list *args)
{
	int i = 0;
	int char_count = 0;
	char *str;

	str = va_arg(*args, char *);

	if (str == 0)
		_printf("(Null)");
		return (6);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		char_count++;
	}
	return (char_count);
}

int print_number(int n)
{
	int char_count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		char_count = 1;
		return (char_count);
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

int print_int(va_list *args)
{
	int char_count = 0;

	unsigned int n = va_arg(*args, int);

	char_count = print_number(n);

	return (char_count);
}

int (*_print_selected(char *flag))(va_list *args)
{
	select printer[] = {
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
			char_count = char_count + (*_print_selected((char *)&format[i + 1])) (&args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (char_count);
}

int main(void)
{
    _printf("Test %d: my string %s, Char: %c, %%, %i...\n", 44, "Coucou", 'Z', 555);
	_printf("You %s cool", (char*)0)

    return (0);
}
