#include <stdlib.h>
#include "main.h"

/**
* _strlen - calculates string length
*
* @s: string whose case is to be tested
*
* Return: (Always/Success)
*/

int _strlen(char *s)
{
char *p;
int j = 0;
p = s;

while (*p != '\0')
{
j++;
p++;
}

return (j);
}

/**
* *string_nconcat - Entry point
*
* @s1: first string
*
* @s2: second string
*
* @n: number of items to be concatenated
*
* Return: (Always/Success)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, size1, size2;

size1 = _strlen(s1);
size2 = _strlen(s2);

if (s1 ==  NULL)
{
s1 = "";
}
if (s2 ==  NULL)
{
s2 = "";
}

if (n >= size2)
{
n = size2;
}

s = malloc((size1 + n + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; s2[j] != '\0' && j < n; i++, j++)
{
s[i] = s2[j];
}
s[i] = '\0';
return (s);
}
