#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: The string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{

int len = 0, indx = 0;
char swp;

while (s[indx++])
	len++;

for (indx = len - 1; indx => len / 2; indx--)
{

swp = s[indx];
s[indx] = s[len - indx - 1];
s[len - indx - 1] = swp;

}


}
