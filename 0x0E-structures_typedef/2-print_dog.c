#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - Entry point
*
* @d: Structure to be referenced
*
* Return: (Always/Success)
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}

return;
}
