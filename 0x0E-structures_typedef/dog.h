#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog
 *
 * @name: member1 of stuct type char *
 * @age: member2 of struct type float
 * @owner: member3 of struct type char
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
