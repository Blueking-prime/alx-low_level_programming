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

j = _strlen(s);

char t[j + 1];

int i;
for (i = j; i >= 0; i--)
{
t[k] = s[i];
k++;
}

s = t;
return;
}
