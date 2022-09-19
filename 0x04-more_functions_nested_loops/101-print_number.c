#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Print an integer
 *
 * @n: the integer to print
 */

void print_number(int n)
{

unsigned int num = n;

if (num < 0)
{

_putchar('-');
num = -num;

}

if ((num / 2) > 0)
	print_number(num / 10);

	_putchar((num % 10) + '0');
}
