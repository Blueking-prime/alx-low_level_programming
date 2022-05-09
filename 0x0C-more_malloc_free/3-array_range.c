#include <stdlib.h>
#include "main.h"

/**
* *array_range - Entry point
*
* @min: number of elements
*
* @max: size of type
*
* Return: (Always/Success)
*/

int *array_range(int min, int max)
{
int range, i;
int *a;

if (min > max)
{
return (NULL);
}

range = max - min + 1;

a = malloc(range * sizeof(int));
if (a == NULL)
{
return (NULL);
}

for (i = 0; i < range; i++)
{
a[i] = min + i;
}

return (a);
}
