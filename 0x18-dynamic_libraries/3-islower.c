#include "main.h"

/**
* _islower - Entry point
* @c: character who's case is to be tested
* Return: 0 or 1
*/

int _islower(int c)
{
if (c <= 122 && c >= 97)
{
return (1);
}
else
{
return (0);
}
}
