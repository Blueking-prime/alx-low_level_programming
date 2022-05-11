#include "dog.h"
#include <stdlib.h>

/**
* *new_dog - Entry point
*
* @d: name of dog
*
* Return: (Always/Success)
*/

void free_dog(dog_t *d)
{
free(d);
}
