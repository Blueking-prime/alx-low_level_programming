#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* @argc: number of arguments
*
* @argv: list of arguments
*
* Return: (Always/Success)
*/

int main(int argc, char **argv)
{
int a, i;
int res = 0;
if (argc == 1)
{
printf("%d\n", 0);
return (0);
}
for (i = 0; i < argc; i++)
{
a = atoi(argv[i]);
if (a / 1 != a)
{
printf("Error\n");
return (1);
}
else
{
res += a;
}
}
return (0);
}
