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
int **a;
int i, j;

if (width < 1 || height < 1)
{
return (NULL);
}

a = malloc(height * sizeof(*a));

if (a == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(width * sizeof(**a));

if (a[i] == NULL)
{
while (i--)
{
free(a[i]);
}
free(a);
return (NULL);
}

for (j = 0; j < width; j++)
{
a[i][j] = 0;
}
}
return (a);
}
