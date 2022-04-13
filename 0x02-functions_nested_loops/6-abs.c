#include "main.h"

/**
* _abs - Entry point
* @n: character who's case is to be tested
* Return: (Always/Success)
*/

int _abs(int n)
{
int res;
if (n < 0)
{
res = n - (2*n);
return (res);
}
else
{
return (n);
}
}
