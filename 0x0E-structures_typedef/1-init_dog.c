#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function for dog description
 * @d: dog descriptiom
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NA
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
