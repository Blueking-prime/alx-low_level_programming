#include "main.h"

/**
* reverse_array - Entry point
*
* @a: array to be reversed
*
* Return: (Always/Success)
*/

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0, j = n / 2; j > 0; i++, j--)
{
a[n - 1 - i] += a[i];
a[i] = a[n - 1 - i] - a[i];
a[n - 1 - i] = a[n - 1 - i] - a[i];
}
return;
}
