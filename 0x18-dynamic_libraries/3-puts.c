#include "main.h"

/**
* _puts - Entry point
*
* @str: string whose case is to be tested
*
* Return: (Always/Success)
*/

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
