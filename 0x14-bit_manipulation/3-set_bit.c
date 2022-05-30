#include "main.h"

/**
* set_bit - Entry point
*
* @n: pointer to number to be converted to binary
*
* @index: the index of the bit to be retrieved
*
* Return: (Always/Sucess)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int a;
	
	if (index > 63)
	{
		return (-1);
	}

	a = *n | (1 << index);

	*n = a;

	return (1);
}
