#include "main.h"

/**
* *leet - Entry point
*
* @s: strring whose case is to be tested
*
* Return: (Always/Success)
*/

char *leet(char *s)
{
int i;
int j;
char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == letters[j])
{
s[i] = nums[j];
}

}
}

return (s);
}