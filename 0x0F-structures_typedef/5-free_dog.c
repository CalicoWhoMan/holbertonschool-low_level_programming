#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - frees dog strings
 * @d: structure
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
