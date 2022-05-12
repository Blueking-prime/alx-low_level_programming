#include "dog.h"
#include <stdlib.h>

/**
* *new_dog - Entry point
*
* @name: name of dog
*
* @age: age of dog
*
* @owner: owner of dog
*
* Return: (Always/Success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}

d->name = name;
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->age = age;
d->owner = owner;
if (d->owner == NULL)
{
free(d);
return (NULL);
}
return (d);
}
