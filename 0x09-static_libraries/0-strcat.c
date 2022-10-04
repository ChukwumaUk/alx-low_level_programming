#include "main.h"

/**
 * strcat - Write a function that concatenates two strings.
 *
 * @dest:a pointer to the string to be concatenated upon
 * @src: the source string to append to dest
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *strcat(char *dest, const char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;

for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];

	return (dest);

}
