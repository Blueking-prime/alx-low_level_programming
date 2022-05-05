#include <stdlib.h>
#include "main.h"

/**
* **alloc_grid - Entry point
*
* @width: length of array
*
* @height: height of array
*
* Return: (Always/Success)
*/

int **alloc_grid(int width, int height)
{
int **a, *b;
int i, j;

if (width < 1 || height < 1)
{
return (NULL);
}

b = malloc(width * sizeof(int));

if (b == NULL)
{
return (NULL);
}

a = malloc(height * sizeof(b));

if (a == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (a);
}
