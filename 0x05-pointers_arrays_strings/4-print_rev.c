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
int i;

char *p;
int j = 0;
p = s;

while (*p != '\0')
{
j++;
p++;
}

for (i = j; i >= 0; i--)
{
_putchar(s[i]);
}
return;
}
