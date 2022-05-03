#include <stdio.h>

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
int a, b, res;
if (argc == 3)
{
a = argv[1];
b = argv[2];

res = a * b;

printf("%d\n", res);

return (0);
}
else
{
printf("Error\n");
return (1);
}
}