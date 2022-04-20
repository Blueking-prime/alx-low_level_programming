#include "main.h"

/**
* puts_half - Entry point
*
* @str: string whose case is to be tested
*
* Return: (Always/Success)
*/

void puts_half(char *str)
{
int j;
int k;

j = _strlen(str);

if (j % 2 == 0)
{
k = j / 2;
}
else
{
k = (j - 1) / 2;
}

int i;
for (i = k; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
