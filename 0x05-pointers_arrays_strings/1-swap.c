#include "main.h"

/**
* swap_int - Entry point
*
* @a: number who's case is to be tested
*
* @b: number who's case is to be tested
*
* Return: (Always/Success)
*/

void swap_int(int *a, int *b)
{
int c;
int d;

c = a;
d = b;

a = d;
b = c;

return;
}
