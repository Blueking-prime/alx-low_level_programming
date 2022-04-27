#include "main.h"

/**
* *_memset - Entry point
*
* @s: First param
*
* @b: Second param
*
* @n: Third param
*
* Return: (Always/Success)
*/

char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
