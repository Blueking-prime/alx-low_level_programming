#include <stdio.h>

/**
* main - Entry point
*
* Return: Always (Success/correct)
*/
int main(void)
{
int c;

for (c = 0; c <= 9; c++)
{
putchar (c + '0');
putchar (',');
putchar(' ');
}

return (0);
}
