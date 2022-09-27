#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 *
 * @s: The pointer to the memory area
 * @b: Constant byte
 * @n: Number of bytes to be filled
 * Return: A pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
	i++;
	}

	return (s);
}
