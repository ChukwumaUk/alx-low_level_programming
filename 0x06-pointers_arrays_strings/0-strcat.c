#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 *
 * @dest: First string
 * @src: Second string to append to dest
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

int i = 0, j = 0;

while (dest[i++])
	j++;

for (i = 0; src[i]; i++)
	dest[j] = src[i];

	return (dest);

}
