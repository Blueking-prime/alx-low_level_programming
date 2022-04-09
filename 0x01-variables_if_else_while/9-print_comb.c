#include <stdio.h>

/**
* main - Entry point
*
* Return: Always (Success/correct)
*/
int main(void)
{
int c;
int d;

for (c = 0; c <= 9; c++)
{
for (d = 0; d <= 9; d++)
{
putchar (c + '0');
putchar (d + '0');
putchar (',');
putchar(' ');
}
}
return (0);
}
