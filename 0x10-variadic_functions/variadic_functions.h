#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);

/**
* struct typ - structure definition of a typ
*
* @type_name: type
* @print_func: function to print
*/

typedef struct typ
{
char *type_name;
void (*print_func)(va_list);
}type;

#endif /* VARIADIC_FUNCTIONS_H */
