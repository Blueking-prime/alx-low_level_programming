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
for (a = 0; a <= 3; a++)
{
for (b = 0; b <= 5; b++)
{
for (c = 0; c <= 9; c++)
{
_putchar ('2');
_putchar (a + '0');
_putchar (':');
_putchar (b + '0');
_putchar (c + '0');
_putchar ('\n');
}
}
}
return;
}
