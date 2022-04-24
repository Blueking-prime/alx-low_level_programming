#include "main.h"

/**
* *cap_string - Entry point
*
* @s: strring whose case is to be tested
*
* Return: (Always/Success)
*/

char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == 9 || s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.')
{
i++;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
i--;
}
else if (s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
i++;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
i--;
}
}
return (s);
}
