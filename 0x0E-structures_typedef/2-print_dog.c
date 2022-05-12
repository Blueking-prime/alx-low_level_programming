#include <stdio.h>
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
printf("Name: (nil)");
}
else
{
printf("Name: %s", d->name);
}

printf("Age: %f", d->age);

if (d->owner == NULL)
{
printf("owner: (nil)");
}
else
{
printf("Owner: %s", d->owner);
}

return;
}
