#include "dog.h"

/**
* init_dog - Entry point
*
* @d: Structure to be referenced
*
* @name: name of dog
*
* @age: age of dog
*
* @owner: owner of dog
*
* Return: (Always/Success)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;

return;
}
