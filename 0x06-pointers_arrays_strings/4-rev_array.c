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
int b[n];

for (i = 0; i < n; i++)
{
b[i] = a[i];
}

for (j = 0; j < n; j++, i--)
{
a[j] = b[i];
}

return;
}
