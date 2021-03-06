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

if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}
