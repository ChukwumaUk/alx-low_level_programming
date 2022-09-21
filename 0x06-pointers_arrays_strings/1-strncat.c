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

int i = 0, j;

while (dest[i] != '\0')
	i++;
for (j = 0; j < n && src[j] != '\0'; j++, i++)
	dest[i] = src[i];

dest[i] = '\0';

return (dest);

}
