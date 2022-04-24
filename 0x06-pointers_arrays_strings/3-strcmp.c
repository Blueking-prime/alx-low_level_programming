#include "main.h"

/**
* _strcmp - Entry point
*
* @s1: compared string
*
* @s2: source string
*
* Return: (Always/Success)
*/

int _strcmp(char *s1, char *s2)
{
char *p;
int j = 0;
p = s2;
/*calculating source string length*/
while (*p != '\0')
{
j++;
p++;
}

int i, res;
res = 0;
for (i = 0; i < j; i++)
{
if (s1[i] != s2[i])
{
res += s1[i] - s2[i];
}
}

return (res);
}
