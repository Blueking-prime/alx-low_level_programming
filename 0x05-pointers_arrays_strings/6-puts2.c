#include "main.h"

/**
* puts2 - Entry point
*
* @str: string whose case is to be tested
*
* Return: (Always/Success)
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return;
}
