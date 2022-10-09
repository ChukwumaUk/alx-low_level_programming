#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of array to be initialized
 * @c: The specific character to initialize the array
 *
 * Return: Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
