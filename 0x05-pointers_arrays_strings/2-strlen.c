#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: The string
 *
 * Return: The length of the spring
 */

int _strlen(char *s)
{
int length = 0;

while (*s++)
	length++;

return (length);

}
