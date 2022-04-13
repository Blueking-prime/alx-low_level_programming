#include "main.h"

/**
* times_table - Entry point
*
* Return: (Always/Success)
*/

void times_table(void)
{
int a = 0;
int b = 0;
int res;
while (a <= 9)
{
while (b <= 9)
{
res = a * b;
if (res < 10)
{
_putchar (' ');
_putchar (' ');
}
else
{
_putchar (' ');
}
_putchar(res + '0');
b++;
if (b == 9)
{
_putchar ('\n');
}
}
a++;
}
}
