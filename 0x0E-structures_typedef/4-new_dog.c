#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * my_strlen - finds string length in order to malloc properly
 * @str: input string
 * Return: string length unsigned integer
 */

unsigned int my_strlen(char *str)
{
unsigned int i = 0;

while (*(str + i) != '\0')
	i++;
return (i);
}

/**
 * my_strcpy - copies string
 * @to: pointer to new string
 * @from: pointer to new string
 * Return: void
 */

void my_strcpy(char *to, char *from)
{
unsigned int i, len = my_strlen(from);

for (i = 0; i <= len; i++)
	to[i] = from[i];
}

/**
 * new_dog - Write a function that creates a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: name of new dog or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int name_len = my_strlen(name), owner_len = my_strlen(owner);
dog_t *scooby_doo;

scooby_doo = malloc(sizeof(dog_t));
if (scooby_doo)
{
scooby_doo->name = malloc(sizeof(char) * (name_len + 1));
if (scooby_doo->name)
{
scooby_do->owner = malloc(sizeof(char) * (owner_len + 1));
if (scooby_doo->owner)
{
my_strcpy(scooby_doo->name, name);
scooby_doo->age = age;
my_strcpy(scooby_doo->owner, owner);
return (scooby_doo);
}
else
{
free(scooby_doo->name);
free(scooby_doo);
}
}
else
free(scooby_doo);
}
return (NULL);
}
