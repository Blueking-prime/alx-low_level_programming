#include "dog.h"
#include <stdlib.h>
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

if (name == NULL || owner == NULL)
{
return (NULL);
}

d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}

d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
