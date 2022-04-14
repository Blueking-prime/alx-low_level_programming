#include "main.h"

/**
* _isupper - Entry point
* @c: character who's case is to be tested
* Return: 0 or 1
*/

int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
