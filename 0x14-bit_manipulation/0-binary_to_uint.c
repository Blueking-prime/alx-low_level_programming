#include "main.h"

/**
* _atoi - convert a string to an integer.
*
* @s: char type string
*
* Return: (Always/Success)
*/

int _atoi(const char *s)
{
	int i, sign = 1, resp = 0, firstNum;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
* binary_to_uint - Entry point
*
* @b: binary number to be converted
*
* Return: (Always/Sucess)
*/

unsigned int binary_to_uint(const char *b)
{
	int a, c, d, e, i;

	if (b == NULL)
	{
		return (0);
	}

	a = _atoi(b);

	if (a == 0)
	{
		return (0);
	}

	for (i = 0, e = 0; a > 0; i++)
	{
		c = a / 10;
		d = a % 10;

		e += d * (1 << i);

		a = c;
	}

	return (e);
}
