#include "main.h"

/**
* is_prime_number - Entry point
*
* @n: String to be printed
*
* Return: (Always/Success)
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (stress_it(n, 2));
}

/**
* stress_it - checks every number up to n
*
* @n: String to be printed
*
* @test: String to be printed
*
* Return: (Always/Success)
*/

int stress_it(int n, int test)
{
if (n == test)
{
return (1);
}
else if (n % test == 0)
{
return (0);
}
else
{
return (stress_it(n, ++test));
}
}
