#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Entry point
*
* @n: number to be operated on
*
* Return: (Always/Success)
*/

void print_to_98(int n)
{
int a;
if (n < 98)
{
for (a = n; a <= 98; a++)
{
printf ("%d, ", a);
}
}
else if (n > 98)
{
for (a = n; a >= 98; a--)
{
printf ("%d, ", a);
}
}
else
{
printf ("98");
}
}
