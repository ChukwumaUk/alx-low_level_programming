#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Write a function that concatenates all
 * the arguments of your program.
 * @ac: The no. of arguments passed to the program
 * @av: An array of pointers to the arguments.
 *
 * Return: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
char *str;
int arg, byte, i, size = ac;

if (ac == 0 || av == NULL)
	return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
	size++;
}
str = malloc(sizeof(char) * size + 1);

if (str == NULL)
	return (NULL);

	i = 0;
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
	str[i++] = av[arg][byte];

str[i++] = '\n';
}
str[size] = '\0';

return (str);
}
