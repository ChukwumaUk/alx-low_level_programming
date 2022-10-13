#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Write a function that initialize a variable
 * of type struct dog
 * @d: new dog structure name
 * @name: member1 - dog's name
 * @age: member2 - dog's age
 * @owner: member3 - dog's owner
 * Return: Void
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
