#include "main.h"

/**
* _print_rev_recursion - Entry point
*
* @s: String to be printed
*
* Return: (Always/Success)
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_print_rev_recursion(s++);
_putchar(*s);
}
return;
}
