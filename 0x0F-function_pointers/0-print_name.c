#include "function_pointers.h"

/**
* print_name - Entry point
*
* @name: name to be printed
*
* @f: function to use to print
*
* Return: (Always/Success)
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
return;
}
