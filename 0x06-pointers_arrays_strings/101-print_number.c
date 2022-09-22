#include "main.h"

/**
 * print_number - Write a function that prints an integer.
 *
 * @n: the integer
 */

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;

}
else if ((num / 10) > 0)
{
	print_number(num / 10);

	_putchar((num % 10) + '0');
}

}