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
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
return;
}
