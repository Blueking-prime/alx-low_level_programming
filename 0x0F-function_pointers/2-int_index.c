#include "function_pointers.h"

/**
* int_index - Entry point
*
* @array: array to be iterated
*
* @size: size of array
*
* @cmp: function to be perfoemed on array
*
* Return: (Always/Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (cmp != NULL)
{
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
