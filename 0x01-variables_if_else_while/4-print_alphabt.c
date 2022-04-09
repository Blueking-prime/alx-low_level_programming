#include <stdio.h>

/**
* main - Entry point
*
* Return: Always (Success/correct)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q')
{
if (c != 'e')
{
putchar (c);
}
}
}

putchar('\n');
return (0);
}
