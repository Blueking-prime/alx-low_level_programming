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

int main(int argc, int *argv[0])
{
int a, b, res;
if (argc == 3)
{
a = (int) argv[1];
b = (int) argv[2];

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
