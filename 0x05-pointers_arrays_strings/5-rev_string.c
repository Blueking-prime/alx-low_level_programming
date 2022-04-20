#include "main.h"

/**
* rev_string - Entry point
*
* @s: string whose case is to be tested
*
* Return: (Always/Success)
*/

void rev_string(char *s)
{
int j;
int k = 0;
int i;
char *t;

j = _strlen(s);

for (i = j; i >= 0; i--)
{
t[k] = s[i];
k++;
}

s = t;
return;
}
