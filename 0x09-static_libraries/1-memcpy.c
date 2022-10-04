#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from
 * @n: The no of bytes to copy
 * Return: Return a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{
*(dest + i) = *(src + i);
i++;

}
return (dest);
}
