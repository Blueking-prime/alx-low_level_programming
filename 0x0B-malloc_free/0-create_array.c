#include <stdlib.h>
#include "main.h"

/**
* *create_array - Entry point
*
* @size: length of array
*
* @c: character to be cloned
*
* Return: (Always/Success)
*/

char *create_array(unsigned int size, char c)
{
char *s;
int i;

s = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
if (s  == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
