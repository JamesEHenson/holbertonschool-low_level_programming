#include <stdio.h>
#include "dog.h"
/**
 * init_dog - struct of dog.
 * @name: dogs name
 * @owner: ownwers dog
 * @age: age of dog
 * @d: dogs pointer
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
