#include "variadic_functions.h"

/**
* print_numbers - Entry point
*
* @separator: number of arguments
*
* @n: number of arguments
*
* Return: (Always/Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

if (n == 0)
{
return;
}

va_start(args, n);

if (separator != NULL)
{
for (i = 0; i < (n - 1); i++)
{
printf("%d%s", va_arg(args, int), separator);
}
}
else
{
for (i = 0; i < (n - 1); i++)
{
printf("%d", va_arg(args, int));
}
}

printf("%d\n", va_arg(args, int));

va_end(args);

return;
}
