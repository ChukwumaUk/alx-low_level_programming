#include "main.h"

/**
 * _strncat - concatenates string with n bytes from another string
 * @dest: first string
 * @src: string to be concatenated
 * @n:no of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;

for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];

return (dest);

}
