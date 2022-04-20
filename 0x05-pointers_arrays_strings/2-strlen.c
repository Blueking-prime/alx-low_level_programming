#include "main.h"

/**
* _strlen - Entry point
*
* @s: string whose case is to be tested
*
* Return: (Always/Success)
*/

int _strlen(char *s)
{
int *p;
int j = 0;
p = s;

while (*p != '\0')
{
j++;
p++;
}

return (j);
}
