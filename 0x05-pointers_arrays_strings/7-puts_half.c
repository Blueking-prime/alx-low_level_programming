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
int k;
int i;
char *p;
int j = 0;
int l = j - 1;
p = str;
while (*p != '\0')
{
j++;
p++;
}
if (l % 2 == 0)
{
k = l / 2;
}
else
{
k = (l - 1) / 2;
}

for (i = k; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
