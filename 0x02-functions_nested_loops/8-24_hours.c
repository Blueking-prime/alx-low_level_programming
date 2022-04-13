#include "main.h"

/**
* jack_bauer - Entry point
* @n: character who's case is to be tested
* Return: (Always/Success)
*/


void jack_bauer(void)
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
for (a = 0; a <= 1; a++)
{
for (b = 0; b <= 9; b++)
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
for (e = 0; e <= 3; e++)
{
for (f = 0; f <= 5; f++)
{
for (g = 0; g <= 9; g++)
{
_putchar ('2');
_putchar (e + '0');
_putchar (':');
_putchar (f + '0');
_putchar (g + '0');
_putchar ('\n');
}
}
}
return;
}
