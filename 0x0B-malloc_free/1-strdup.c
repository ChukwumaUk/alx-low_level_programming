#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: The string to be copied
 *
 * Return: Returns NULL if str = NULL or if insufficient memory is available
 * Else returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *duplicate;
int i, len = 0;

if (str == NULL)
	return (NULL);

for (i = 0; str[i]; i++)
	len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
	return (NULL);
for (i = 0; str[i]; i++)
	duplicate[i] = str[i];
duplicate[len] = '\0';

return (duplicate);
}
