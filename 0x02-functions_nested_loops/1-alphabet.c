#include "main.h";

/**
* main - Entry point
*
* Return: Always (Success/correct)
*
* print_alphabet - Prints out the alphabet
*
* Return: Always
*/

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
return;
}
