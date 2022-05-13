#include "function_pointers.h"
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

int main(int argc, char *argv[])
{
int c;
int a = atoi(argv[1]);
int b = atoi(argv[3]);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if ((argv[2] == "/" || argv == "%") && argv[3] == "0")
{
printf("Error\n");
exit(100);
}

c = get_op_func(argv[2])(a, b);

if (c == NULL)
{
printf("Error\n");
exit(99);
}

printf("%d\n", c);

return (0);
