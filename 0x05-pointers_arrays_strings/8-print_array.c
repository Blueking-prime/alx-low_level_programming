#include "main.h"
#include <stdio.h>

/**
* print_array - Entry point
*
* @a: string whose case is to be tested
*
* @n: string whose case is to be teste
*
* Return: (Always/Success)
*/

void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[i]);
return;
}
