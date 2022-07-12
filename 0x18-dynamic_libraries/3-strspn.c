#include "main.h"

/**
* _strspn - Entry point
*
* @s: String to be checked
*
* @accept: String to check for
*
* Return: (Always/Success)
*/

unsigned int _strspn(char *s, char *accept)
{
int i, j;
int k = 0;
int x = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}

if (k == x)
{
return (k);
}
else
{
x = k;
}
}

return (k);
}
