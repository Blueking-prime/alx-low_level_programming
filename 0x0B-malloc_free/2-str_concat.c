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
* *str_concat - Entry point
*
* @s1: length of array
*
* @s2: character to be cloned
*
* Return: (Always/Success)
*/

char *str_concat(char *s1, char *s2)
{
char *s;
int i, size1, size2;

size1 = _strlen(s1);
size2 = _strlen(s2);

s = malloc((size1 + size2 + 1) * sizeof(char));
if (s == NULL || s == 0)
{
return (NULL);
}
if (s1 ==  NULL)
{
s1 = '\0';
}
if (s2 ==  NULL)
{
s2 = '\0';
}
for (i = 0; i <= size1 + size2; i++)
{
if (i < size1)
{
s[i] = s1[i];
}
else
{
s[i] = s2[i - size1];
}
}
s[i] = '\0';
return (s);
}
