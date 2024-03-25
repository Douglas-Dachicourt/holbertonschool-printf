#ifndef __MAIN_H__
#define __MAIN_H__

int _putchar(char c);
void print_char(va_list *args);
void print_str(va_list *args);
int _printf(const char *format, ...);
/**
 * struct struc_print - main struct
 * @op: choix de l'operateur op
 * @func: fonction appelée pour définir le type d'op
 * Description: permet de séléctionner l'op en fct de l'arg
 */
typedef struct struc_print
{
char *op;
int (*func)(va_list *args);
} select;

#endif
