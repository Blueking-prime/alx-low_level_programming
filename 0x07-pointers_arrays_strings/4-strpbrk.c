#include "main.h"

/**
* *_strpbrk - Entry point
*
* @s: String to be checked
*
* @accept: String to check for
*
* Return: (Always/Success)
*/

char *_strpbrk(char *s, char *accept)
{
int i, k;
char *p;

for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
{
p = &s[i];
return (p);
}
}
}

return ('\0');
}
