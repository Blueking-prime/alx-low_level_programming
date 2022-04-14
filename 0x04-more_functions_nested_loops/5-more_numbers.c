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
_putchar(a + '0');
}
_putchar('\n');
b++;
}
return;
}
