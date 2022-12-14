#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 *
 * @s: String
 * @c: Character
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
		break;

return (s[i] == c ? (s + i) : '\0');

}
