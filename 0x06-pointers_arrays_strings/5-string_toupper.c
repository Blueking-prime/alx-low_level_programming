#include "main.h"

/**
* *string_toupper - Entry point
*
* @s: strring whose case is to be tested
*
* Return: (Always/Success)
*/

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
return (s);
}
