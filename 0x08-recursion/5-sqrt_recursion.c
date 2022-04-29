#include "main.h"

/**
* _sqrt_recursion - Entry point
*
* @n: String to be printed
*
* Return: (Always/Success)
*/

int _sqrt_recursion(int n)
{
return (brute_force(n, 1));
}

/**
* brute_force - brute forces numbers till it arrives at the correct one
*
* @n: String to be printed
*
* @test: String to be printed
*
* Return: (Always/Success)
*/

int brute_force(int n, int test)
{
if (test * test == n)
{
return (test);
}
else if  (test * test < n)
{
return (brute_force(n, ++test));
}
else
{
return (-1);
}
}
