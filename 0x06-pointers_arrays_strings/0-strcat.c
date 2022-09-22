#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: First string
 * @src: Second string to append to dest
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, const char *src)
{

int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;

for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];

	return (dest);

}
