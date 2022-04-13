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
for (a = 0; a <= 2; a++)
{
_putchar ('a');
for (b = 0; b <= 3; b++)
{
_putchar ('b');
_putchar (':');
for (c = 0; c <= 5; c++)
{
_putchar ('c');
for (d = 0; d <= 9; d++)
{
_putchar ('d');
}
}
}
}
return;
}
