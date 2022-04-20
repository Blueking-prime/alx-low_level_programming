#include "main.h"

/**
* print_rev - Entry point
*
* @s: string whose case is to be tested
*
* Return: (Always/Success)
*/

void print_rev(char *s)
{
int j;

j = _strlen(s);

int i;
for (i = j; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
return;
}
