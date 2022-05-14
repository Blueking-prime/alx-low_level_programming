#include "function_pointers.h"
#include "3-calc.h"
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

int main(int argc, char *argv[])
{
int a, b, c;

a = atoi(argv[1]);
b = atoi(argv[3]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if ((*argv[2] == "/" || *argv[2] == "%") && *argv[3] == "0")
{
printf("Error\n");
exit(100);
}

c = get_op_func(argv[2])(a, b);

if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", c);

return (0);
}
