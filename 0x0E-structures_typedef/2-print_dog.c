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

if (d->age == 0)
{
printf("Age: (nil)");
}
else
{
printf("Age: %d", d->age);
}

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
