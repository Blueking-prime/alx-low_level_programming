#include "main.h"

/**
* print_triangle - Entry point
*
* @size: height and base length of triangle
*
* Return: (Always/Success)
*/

void print_triangle(int size)
{
int i;
int j;
int k;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
j = size;
while (j > i)
{
_putchar(' ');
j--;
}
k = 1;
while (k <= i)
{
_putchar('#');
k++;
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
