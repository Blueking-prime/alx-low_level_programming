#include "main.h"

/**
* _isalpha - Entry point
* @c: character who's case is to be tested
* Return: 0 or 1
*/

int _isalpha(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else if (c <= 90 && c >= 65)
{
return (1);
}
else
{
return (0);
}
}
