#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 *
 * @s: The string to be considered
 *
 * Return: Void
 */

int _strlen_recursion(char *s)
{
int l = 0;

if (*s)
{
l++;
l += _strlen_recursion(s + 1);
}
return (l);
}
