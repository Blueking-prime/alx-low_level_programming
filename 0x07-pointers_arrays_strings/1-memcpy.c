#include "main.h"

/**
* *_memcpy - Entry point
*
* @dest: address to be copied to
*
* @src: address to be copied from
*
* @n: number of bytes to be copied
*
* Return: (Always/Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
