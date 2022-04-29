#include "main.h"

/**
* _puts_recursion - Entry point
*
* @s: String to be printed
*
* Return: (Always/Success)
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\0');
}
else
{
_putchar(*s);
_puts_recursion(++s);
}
return;
}
