#include "main.h"

/**
* *_strcat - Entry point
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
