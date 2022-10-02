#include "main.h"

int _sqrt_recursion(int n);
int get_sqrt(int num, int root);

/**
 * get_sqrt - finds the natural sqrt of an inputted number
 * @num: the number to find the sqrt of
 * @root: the root to be tested
 *
 * Return: if the number has a natural square root - the square root
 * if the number does not have a natural square root - -1
 */


int get_sqrt(int num, int root)
{
if ((root * root) == num)
	return (root);
if (root == num / 2)
	return (-1);

return (get_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number.
 * @n: the number in the question
 * Return: the natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
	return (-1);

if (n == 1)
	return (1);

return (get_sqrt(n, root));
}
