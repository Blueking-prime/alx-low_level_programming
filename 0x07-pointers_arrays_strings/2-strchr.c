#include "main.h"

/**
* *_strchr - Entry point
*
* @s: String to be checked
*
* @c: Character to check for
*
* Return: (Always/Success)
*/

char *_strchr(char *s, char c)
{
int i;
int j = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
j++;
break;
}
}

if (j != 0)
{
return (s + j);
}
else
{
return ('\0');
}
}
