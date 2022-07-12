#include "main.h"

/**
* *_strncpy - Entry point
*
* @dest: string whose case is to be tested
*
* @src: string whose case is to be teste
*
* @n: number of bytes to copy from source
*
* Return: (Always/Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; (src[i] != '\0') && (i < n); i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
