#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - Entry point
*
* @nmemb: number of elements
*
* @size: size of type
*
* Return: (Always/Success)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int i;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

a = malloc(nmemb * size);
if (a == NULL)
{
free(a);
return(NULL);
}

for (i = 0; i < (nmemb * size); i++)
{
a[i] = 0;
}

return (a);
}
