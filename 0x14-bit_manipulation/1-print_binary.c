#include "main.h"

/**
* recursive_print - Prints each digit of n recursively
*
* @n: number to be converted to binary
*
* Return: (Always/Sucess)
*/

void recursive_print(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	recursive_print(n >> 1);

	if (n & 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('0');
		return;
	}
}

/**
* print_binary - Entry point
*
* @n: number to be converted to binary
*
* Return: (Always/Sucess)
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	recursive_print(n);
}
