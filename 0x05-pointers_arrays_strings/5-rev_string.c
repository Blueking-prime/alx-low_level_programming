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
int k = 0;
int i;
char *p;
int j = 0;
char *t;

p = s;

while (*p != '\0')
{
j++;
p++;
}

for (i = j; i >= 0; i--)
{
t[k] = s[i];
k++;
}

s = t;
return;
}
