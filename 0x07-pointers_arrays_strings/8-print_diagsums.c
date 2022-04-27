#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Entry point
*
* @a: String to be checked
*
* @size: String to be checked
*
* Return: (Always/Success)
*/

void print_diagsums(int (**a), int size)
{
int i;
int j = size - 1;
int k = 0;
int l = 0;

for (i = 0; i < size; i++)
{
k += a[i][i];
l += a[i][j];
j--;
}


printf("%d, %d\n", k, l);
return;
}
