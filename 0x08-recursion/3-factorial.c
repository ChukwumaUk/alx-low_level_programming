#include "main.h"

/**
 * factorial - Write a function that returns the
 *            factorial of a given number.
 *
 * @n: The factorial number we are looking for
 *
 * Return: if n > 0: The factorial of n
 *         if < 0: Return an error
 */

int factorial(int n)
{
int num = n;

if (n < 0)
	return (-1);
else if (n >= 0 && n <= 1)
	return (1);

num *= factorial(n - 1);
return (num);

}
