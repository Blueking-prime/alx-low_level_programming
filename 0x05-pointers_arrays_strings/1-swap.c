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
*a += *b;
*b = *a - *b;
*a = *a - *b;
return;
}
