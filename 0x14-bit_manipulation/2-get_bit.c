#include "main.h"

/**
* get_bit - Entry point
*
* @n: number to be converted to binary
*
* @index: the index of the bit to be retrieved
*
* Return: (Always/Sucess)
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
	{
		return (-1);
	}

	a = n >> index;

	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (-1);
}
