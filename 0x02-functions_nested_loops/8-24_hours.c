#include "main.h"
/**
* jack_bauer - Entry point
*
* Return: (Always/Success)
*/
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
int e = 9;
for (a = 0; a <= 1; a++)
{
if (a == 2)
{
e = 3;
b = 0;
}
for (b = 0; b <= e; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar (a + '0');
_putchar (b + '0');
_putchar (':');
_putchar (c + '0');
_putchar (d + '0');
_putchar ('\n');
}
}
}
}
return;
}
