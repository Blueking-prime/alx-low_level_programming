#include "main.h"

/**
* more_numbers - Entry point
*
* Return: Always
*/

void more_numbers(void)
{
int a;
int b = 0;
while (b < 10)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar('1');
}
_putchar((a % 10) + '0');
}
_putchar('\n');
b++;
}
return;
}
