#include "function_pointers.h"
#include "3-calc.h"

/**
* (*get_op_func) - Entry point
*
* @s: operation to use
*
* Return: (Always/Success)
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 5)
{
if (s == ops->op)
{
return (ops->f);
}
}
return (ops->f);
}