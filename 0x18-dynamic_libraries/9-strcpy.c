#include "main.h"

/**
* *_strcpy - Entry point
*
* @dest: string whose case is to be tested
*
* @src: string whose case is to be teste
*
* Return: (Always/Success)
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = src[i];

return (dest);
}
