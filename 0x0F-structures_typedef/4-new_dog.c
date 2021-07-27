#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creats new struct for doggoo
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dogg
 * Return: all
 */

dog_t *new_dog(char *name, float age, char *owner)

{
dog_t *transit;
transit = malloc(sizeof(dog_t));
if (transit == NULL)
{
return (NULL);
}
transit->name = strdup(name);
if (transit->name == NULL)
{
free(transit);
return (NULL);
}
transit->owner = strdup(owner);
if (transit->owner == NULL)
{
free(transit);
free(transit->name);
return (NULL);
}
transit->age = age;
return (transit);
}
