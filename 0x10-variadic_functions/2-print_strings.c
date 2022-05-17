#include "variadic_functions.h"

/**
* print_strings - Entry point
*
* @separator: number of arguments
*
* @n: number of arguments
*
* Return: (Always/Success)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *s;

va_start(args, n);

if (separator != NULL)
{
for (i = 0; i < (n - 1); i++)
{
s = va_arg(args, char*);
s != NULL ? printf("%s%s", s, separator) : printf("(nil)");
}
}
else
{
for (i = 0; i < (n - 1); i++)
{
s = va_arg(args, char*);
s != NULL ? printf("%s", s) : printf("(nil)");
}
}

s = va_arg(args, char*);
s != NULL ? printf("%s\n", s) : printf("(nil)");

va_end(args);
}
