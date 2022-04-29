#include "main.h"

/**
* _strlen_recursion - Entry point
*
* @s: String to be printed
*
* Return: (Always/Success)
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s++));
}
