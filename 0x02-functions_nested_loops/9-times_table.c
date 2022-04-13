#include "main.h"

/**
* times_table - Entry point
*
* Return: (Always/Success)
*/

void times_table(void)
#include "holberton.h"

/**
 * times_table - prints times table
 * Return:void
 */

void times_table(void)
{

int a = 0;
int b;
int res;
while (a <= 9)
{
b = 0;
while (b <= 9)
{
rep = a * b;
if (b == 0)
{
_putchar(res + '0');
}
else if (res < 10)
{
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}

if (b < 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
