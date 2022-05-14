#include "function_pointers.h"

/**
* array_iterator - Entry point
*
* @array: array to be iterated
*
* @size: size of array
*
* @action: function to be perfoemed on array
*
* Return: (Always/Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
return;
}
