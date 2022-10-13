#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: Input pointer to new struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf("Age: %.6f\n", age->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
}
