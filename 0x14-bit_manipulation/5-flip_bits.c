#include "main.h"

/**
* flip_bits - Entry point
*
* @n: number 1
*
* @m: number 2
*
* Return: (Always/Sucess)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b = 0;

	a = n ^ m;

	if (a == 0)
	{
		return (0);
	}

	while (a > 0)
	{
		if (a & 1)
		{
			b += 1;
		}
		a = a >> 1;
	}

	return (b);
}
