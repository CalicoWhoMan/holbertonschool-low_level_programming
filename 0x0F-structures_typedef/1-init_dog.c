#include "dog.h"
#include <stddef.h>

/**
 * init_dog - name, age, and owner of dog
 * @d: structure
 * @name: name var
 * @age: age var
 * @owner: owner var
 *
 * Return: dog description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
