#include <stdlib.h>
#include "main.h"

/**
* _strlen - Calculates length of string
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
* *_strdup - Entry point
*
* @str: length of array
*
* Return: (Always/Success)
*/

char *_strdup(char *str)
{
char *s;
int i, size;

if (str == NULL)
{
return (NULL);
}

size = _strlen(str);

s = malloc((size + 1) * sizeof(char));

if (s == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = str[i];
}
s[i] = '\0';
return (s);
}
