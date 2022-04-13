#include "main.h"

/**
* print_last_digit - Entry point
* @n: integer to be calculated
* Return: (Always/Success)
*/


int print_last_digit(int n)
{
int res;

if (n < 0)
{
res = -1 * (n % 10);
}
else
{
res = n % 10;
}
_putchar (res + '0');
return (res);
}
