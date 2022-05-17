/* For some reason this crashes the compiler*/

#include "variadic_functions.h"

/**
* print_c - Prints chars
*
* @arg: argument
*
* Return: (Always/Success)
*/

void print_c(va_list arg)
{
printf("%c", va_arg(arg, int));
}

/**
* print_i - Prints int
*
* @arg: argument
*
* Return: (Always/Success)
*/

void print_i(va_list arg)
{
printf("%d", va_arg(arg, int));
}

/**
* print_f - Prints float
*
* @arg: argument
*
* Return: (Always/Success)
*/

void print_f(va_list arg)
{
printf("%f", va_arg(arg, double));
}

/**
* print_s - Prints strings
*
* @arg: argument
*
* Return: (Always/Success)
*/

void print_s(va_list arg)
{
char *s = va_arg(arg, char*);
s != NULL ? printf("%s", s) : printf("(nil)");
}


/**
* print_all - Entry point
*
* @format: type of argument+
*
* Return: (Always/Success)
*/

void print_all(const char * const format, ...)
{
va_list args;
int j, i = 0;
char *seperator = "";

char *types = "cifs";
void (*funcs[])(va_list) = {print_c, print_i, print_f, print_s};

va_start(args, format);

while (format && format[i])
{
j = 0;
while (j != '\0')
{
if (format[i] == types[j])
{
printf("%s", seperator);
funcs[j](args);
seperator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
