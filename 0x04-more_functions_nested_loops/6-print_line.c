#include "main.h"

/**
* print_line - Entry point
*
* @n: number of times to run
*
* Return: (Always/Success)
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
return;
}
