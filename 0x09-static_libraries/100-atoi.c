#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 *
 * @s: String to be converted
 * Description: The number in the string can be preceded by an
 * infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 *
 * Return: Return integer
 */

int _atoi(char *s)
{
int i;
int p, q;

p = 0;
q = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
	q *= -1;

if (s[i] > 47 && s[i] < 58)
{
if (p < 0)
	p = (p * 10) - (s[i] - '0');
else
	p = (s[i] - '0') * -1;
if (s[i + 1] < 48 || s[i + 1] > 57)
	break;

}

}
if (q < 0)
{
	p *= -1;
}
	return (p);
}
