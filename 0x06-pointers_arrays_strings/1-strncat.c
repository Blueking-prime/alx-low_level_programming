#include "main.h"

/**
* *_strncat - Entry point
*
* @dest: destination string
*
* @src: source string
*
* @n: number of bytes to append fro source
*
* Return: (Always/Success)
*/

char *_strncat(char *dest, char *src, int n)
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

/*Appending source string to destination*/
for (i = 0; (src[i] != '\0') && (i < n); i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';

return (dest);
}
