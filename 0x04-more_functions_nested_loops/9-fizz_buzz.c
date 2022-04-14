#include <stdio.h>
/**
* main - Entry point
* 
* fizz_buzz - The Fizz-Buzz test
*
* Return: (Always/Success)
*/
void fizz_buzz(void);
int main(void)
{
fizz_buzz();
return (0);
}
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz ");
}
else
{
if ((i % 3) == 0)
{
printf("Fizz ");
}
else if ((i % 5) == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
}
}
