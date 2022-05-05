#include <stdlib.h>
#include "main.h"

/**
* free_grid - Entry point
*
* @grid: grid of numbers
*
* @height: height of array
*
* Return: (Always/Success)
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
return;
}
