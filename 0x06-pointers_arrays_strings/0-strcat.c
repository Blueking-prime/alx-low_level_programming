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
int i = 0;
while (src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';

return (dest);
}
