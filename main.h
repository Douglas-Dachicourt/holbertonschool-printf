#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int _printf(const char *format, ...);
int (*_print_selected(char *flag))(va_list args);

/**
 * struct struc_print - main struct
 * @op: choix de l'operateur op
 * @func: fonction appelée pour définir le type d'op
 * Description: permet de séléctionner l'op en fct de l'arg
 */
typedef struct struc_print
{
char *op;
int (*func)(va_list args);
} select;

#endif
