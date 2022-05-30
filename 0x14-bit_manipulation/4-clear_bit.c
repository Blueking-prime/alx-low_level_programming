#include "main.h"

/**
* clear_bit - Entry point
*
* @n: pointer to number to be converted to binary
*
* @index: the index of the bit to be retrieved
*
* Return: (Always/Sucess)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int a;
	
	if (index > 63)
	{
		return (-1);
	}

	if (*n & (1 << index))
	{
		a = *n ^ (1 << index);
		*n = a;
	}

	return (1);
}
