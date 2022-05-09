#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - Entry point
*
* @b: length of array
*
* Return: (Always/Success)
*/

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
