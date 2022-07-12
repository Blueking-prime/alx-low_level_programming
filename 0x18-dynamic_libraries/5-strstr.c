#include "main.h"

/**
* *_strstr - Calculates string stuff
*
* @haystack: String to be checked
*
* @needle: String to check for
*
* Return: (Always/Success)
*/

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
