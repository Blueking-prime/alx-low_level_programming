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
* *_strcat - concatenates strings
*
* @dest: destination string
*
* @src: source string
*
* Return: (Always/Success)
*/

char *_strcat(char *dest, char *src)
{
char *p;
int i;
int j = 0;
p = dest;
/*calculating source string length*/
while (*p != '\0')
{
j++;
p++;
}
j++;

/*Appending Source string to destination*/
for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';

return (dest);
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
char *s, *str;
int i, size;

str = _strcat(s1, s2);

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
if (str == NULL || *str == '\0')
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
