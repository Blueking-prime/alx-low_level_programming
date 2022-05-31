#include "main.h"

/**
* _atoi - convert a string to an integer.
*
* @s: char type string
*
* Return: (Always/Success)
*/

unsigned int _atoi(const char *s)
{
	unsigned int i, j, resp = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 48 || s[j] > 57)
		{
			return (0);
		}
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		resp *= 10;
		resp += (s[i] - '0');
	}

	return (resp);
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
	unsigned int a, c, d, e, i;

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
