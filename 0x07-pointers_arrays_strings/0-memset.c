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

unsigned int index;
unsigned char *memory = s, value = c;

for (index = 0; index < n; index++)
	memory[index] = value;

return (memory);

}
