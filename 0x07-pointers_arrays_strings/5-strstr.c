#include "main.h"

/**
* *_strstr - Entry point
*
* @haystack: String to be checked
*
* @needle: String to check for
*
* Return: (Always/Success)
*/

/**
* _strlen - Calculates length of string
*
* @s: String to be checked
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

char *_strstr(char *haystack, char *needle)
{
int i, k, x, y;
int j = 0;
x = _strlen(needle);
for (i = 0; haystack[i] != '\0'; i++)
{
y = i;
if (haystack[i] == needle[0])
{
for (k = 0; needle[k] != '\0'; k++)
{
if (haystack[i] == needle[k])
{
j++;
i++;
}
}
}
if (j == x)
{
return (haystack + i);
}
j = 0;
i = y;
}

return ('\0');
}
