#include "main.h"

/**
* _isdigit - Entry point
* @c: Digit to be tested
* Return: 0 or 1
*/

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
{
return (0);
}
}
