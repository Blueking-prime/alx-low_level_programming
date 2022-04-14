#include "main.h"

/**
* print_diagonal - Entry point
*
* Return: (Always/Success)
*/
void print_diagonal(int n)
{
int i;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
int j = 1;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
