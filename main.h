#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int print_char(va_list *args);
int print_str(va_list *args);
int print_int(va_list *args);
int print_number(int n);
int print_int(va_list *args);
int print_i(va_list *args);

int _printf(const char *format, ...);
int (*_print_selected(char *flag))(va_list *args);

/**
 * struct struc_print - main struct
 * @op: selector of conversion available (str, char, int ...)
 * @func: function to be called depending on the selector
 * Description: allows to call a function depending on the selector
 */
typedef struct struc_print
{
char *op;
int (*func)(va_list *args);
} choose;

#endif
