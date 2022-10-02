#include "main.h"

/**
 * _pow_recursion - Write a function that returns the
 * value of x raised to the power of y
 * @x: The number to consider
 * @y: The power to be raised
 *
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
int num = x;

if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
num *= _pow_recursion(x, y - 1);
return (num);
}
